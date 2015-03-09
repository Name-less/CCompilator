#include <stdlib.h>
#include <stdio.h>
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

int addr = 0;
int get_next_addr(){
	addr = addr+2;
	return addr;
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
add the symbol to the table if he is not already inside
*/

int ts_push(char * name,char * type_symbole){
	printf("commence le push");
	if(firstOne == NULL){
		return ts_init(name,type_symbole);	
	}
	if(exist(name) == 1){
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
		return 1;
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
		if(iterator->name == name){
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
                if(iterator->name == name){
			(iterator->before)->next = iterator->next;
			iterator->next = iterator->before;
			free(iterator);
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
			(iterator->before)->next = NULL;
			free(iterator);
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
		if(iterator->name == name){
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
		free(aux);
	}
	firstOne = NULL;
}

int main(){
	//printf("%s %s %d et \n",firstOne->name,firstOne->type_symbole,firstOne->adress);
	ts_push((char *)"a",(char *)"const1");
	ts_push((char *)"a",(char *)"const2");
	ts_push((char *)"b",(char *)"const3");
	ts_push((char *)"i",(char *)"const3");
	ts_push((char *)"u",(char *)"const3");
	ts_push((char *)"y",(char *)"const3");
	ts_push((char *)"t",(char *)"const3");
	ts_push((char *)"r",(char *)"const3");
	ts_push((char *)"e",(char *)"const3");
	ts_push((char *)"c",(char *)"const4");
	ts_pop((char *)"i");
	ts_pop_last();
	ts_pop_addr(0);
	ts_display();
}
















