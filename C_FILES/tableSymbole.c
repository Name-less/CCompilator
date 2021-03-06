#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "tableSymbole.h"

/*
the struct we use to define our symbol table
*/

typedef struct Symbole {
	char * type_symbole;
	char * name;
	int adress;
	struct Symbole * next;
	struct Symbole * before;
}symbole;

/*
initialize the table by creating the first reference symbol
*/

int esp = 0;
int addr = 0;
int get_next_addr(){
	addr = addr+2+esp;
	return addr;
}

void set_esp(int value){
	esp = esp + value;
}

int get_esp(){
	return esp;
}



symbole * firstOne;
int ts_init(char * name, char * type_symbole){
	firstOne = (symbole *)malloc(sizeof(struct Symbole));
	if(firstOne != NULL){
		firstOne->name = name;
		firstOne->adress = addr;
		firstOne->type_symbole = type_symbole;
		return 1;
	}else{
		return -1;
	}
}

/*
add a temporary variable on the table
*/

int ts_add_temp(){
        symbole * iterator = firstOne;
	int insert_middle = 0;
	int last_adress;
	while(iterator->next != NULL && insert_middle == 0){
		last_adress = iterator->adress;
               	iterator = iterator->next;
		if(iterator != NULL){
               		if(iterator->adress-last_adress != 2){
                        	insert_middle = 1;   
                	}        
		}
	}

	if(insert_middle == 1){
                symbole * newSymbole = (symbole *)malloc(sizeof(struct Symbole));
                newSymbole->adress = last_adress+2;
                char * buf_name = (char *)malloc(32);
                sprintf(buf_name,"0%d",newSymbole->adress);
                newSymbole->name = (char *)buf_name;
                newSymbole->type_symbole = (char *)"temp";

                newSymbole->before = iterator->before;                
		newSymbole->next = iterator;		
                (iterator->before)->next = newSymbole;
		iterator->before = newSymbole;

		return (newSymbole->adress);
	}else{
        	symbole * newSymbole = (symbole *)malloc(sizeof(struct Symbole));
        	newSymbole->adress = get_next_addr();
		char * buf_name = (char *)malloc(32);
		sprintf(buf_name,"0%d",newSymbole->adress);
		newSymbole->name = (char *)buf_name;
        	newSymbole->type_symbole = (char *)"temp";
        	newSymbole->before = iterator;
        	newSymbole->next = NULL;
        	iterator->next = newSymbole;
        	return (newSymbole->adress);
	}
}

/*
add the symbol to the table if he is not already inside
*/

int ts_push(char * name,char * type_symbole){
	if(firstOne == NULL){
		return ts_init(name,type_symbole);	
	}
	if(exist(name) == 1 || strcmp(name,(char *)"*") == 0){
		symbole * iterator = firstOne;
		while(iterator->next != NULL){
			iterator = iterator->next;
		}
		symbole * newSymbole = (symbole *)malloc(sizeof(struct Symbole));
		newSymbole->name = name;
		newSymbole->adress = get_next_addr();
		newSymbole->type_symbole = type_symbole;
		newSymbole->before = iterator;
		newSymbole->next = NULL;
		iterator->next = newSymbole;
		//ts_display();
		return newSymbole->adress;
	}else{
		return -1;
	}
}

/*
From a given name tel if the name is already on the table or not
*/

int exist(char * name){
	symbole * iterator = firstOne;
	while(iterator != NULL){
		if(strcmp(iterator->name,name) == 0){
			return -1;
		}else{
			iterator = iterator->next;
		}
	}
	return 1;
}

/*
delete the first element of the table
*/

int ts_pop(char * name){
        symbole * iterator = firstOne;
        while(iterator != NULL){
                if(strcmp(iterator->name,name) == 0){
			(iterator->before)->next = iterator->next;
			if(iterator->next != NULL){
				(iterator->next)->before = iterator->before;
			}
			//free(iterator);
			iterator = NULL;
			return 1;
                }else{
                        iterator = iterator->next;
                }
        }
        return -1;
}

int ts_pop_addr(int addr){
	symbole * iterator = firstOne;
	if(addr == 0){
		if(iterator->next != NULL){
			firstOne = iterator->next;
			free(iterator);
			return 1;
		}else{
			free(firstOne);
			firstOne = NULL;
			return 1;
		}
	}
	while(iterator != NULL){
		if(iterator->adress == addr){
			ts_pop(iterator->name);
			return 1;
		}else{
			iterator = iterator->next;
		}
	}
	return -1;
}

int ts_pop_last(){
	symbole * iterator = firstOne;
	while(iterator != NULL){
		if(iterator->next == NULL){
			printf("before is %s \n",(iterator->before)->name);
			(iterator->before)->next = NULL;
			free(iterator);
			iterator = NULL;
			return 1;
		}else{
			iterator = iterator->next;
		}
	}
	return -1;
}


char * get_symbol_at(int addr){
	symbole * iterator = firstOne;
	while(iterator != NULL){
		if(iterator->adress == addr){
			return iterator->name;
		}
		iterator = iterator->next;
	}
	return NULL;
}

int get_addr_from(char * name){
	symbole * iterator = firstOne;
	while(iterator != NULL){
		if(strcmp(iterator->name,name) == 0){
			//printf("******************** %s %d ********\n",name,iterator->adress);
			return iterator->adress;
		}
		iterator = iterator->next;
	}
	return -1;
}

/*
Display the symbol table
*/

void ts_display(){
	symbole * iterator = firstOne;
	printf("########## Symbole Table ########## \n");
	printf("#    Name  |    Type   |  Adress  # \n"); 
	printf("################################### \n");
	while(iterator != NULL){
		printf("----------------------------------- \n");
		printf("#      %s      |   %s    |   %d   # \n",iterator->name,iterator->type_symbole,(iterator->adress));
		printf("----------------------------------- \n");		 
		iterator = iterator->next;
	}
}

/*
delete every symbol of the table but not the firstOne
*/

void ts_flush(){
	symbole * iterator = firstOne;
	addr = 0;
	while(iterator != NULL){
		symbole * aux = iterator;
		iterator = iterator->next;
		//printf("free %s \n",aux->name);
		if(aux != NULL){
			free(aux);
		}
		//printf("free ok \n");
	}
	firstOne = NULL;
}


//this function is necessary to be able to pop every variable declared on a
//if for exemple when we go out of the if
void push_symb_zone(){
	ts_push((char *)"*",(char *)"zone");
}


//function to pop every symbole until the symbole zone
void pop_symb_zone(){
        symbole * iterator = firstOne;
        symbole * lastIterator;
	while(iterator != NULL){
		lastIterator = iterator;
        	iterator = iterator->next;
	}
	while(strcmp(lastIterator->name,(char *)"*") != 0){
		symbole * aux = lastIterator;
		lastIterator = lastIterator->before;
		ts_pop(aux->name);
	}
	if(lastIterator->before != NULL){
		(lastIterator->before)->next = NULL;
		free(lastIterator);
	}
}


/*int main(){
	push_symb_zone();
	printf("ok \n");
	ts_push((char *)"size",(char *)"int");
	push_symb_zone();
	printf("ok \n");
	ts_add_temp();
	ts_add_temp();
	ts_push((char *)"width",(char *)"int");
	ts_push((char *)"height",(char *)"int");
	push_symb_zone();
	ts_push((char *)"price",(char *)"int");
	ts_push((char *)"old",(char *)"int");
	ts_add_temp();
	ts_push((char *)"mark",(char *)"int");
	ts_display();
}*/
















