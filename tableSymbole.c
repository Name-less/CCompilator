#include <stdlib.h>
#include <stdio.h>
#include "tableSymbole.h"

/*
the struct we use to define our symbol table
*/

typedef struct Symbole {
	char * type_symbole;
	char * name;
	int * adress;
	struct Symbole * next;
	struct Symbole * before;
}symbole;

/*
initialize the table by creating the first reference symbol
*/

symbole * firstOne;
int ts_init(){
	firstOne = (symbole *)malloc(sizeof(struct Symbole));
	if(firstOne != NULL){
		firstOne->name = (char *)"base";
		firstOne->adress = (int *)9;
		firstOne->type_symbole = (char *)"no_type";
		return 1;
	}else{
		return -1;
	}
}

/*
add the symbol to the table if he is not already inside
*/

int ts_push(char * name,char * type_symbole){
	if(exist(name) == 1){
		symbole * newSymbole = (symbole *)malloc(sizeof(struct Symbole));
		newSymbole->name = name;
		newSymbole->type_symbole = type_symbole;
		newSymbole->before = firstOne;
		newSymbole->next = firstOne->next;
		if(firstOne->next != NULL){
		(firstOne->next)->before = newSymbole;
		}
		firstOne->next = newSymbole;
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
		printf("#      %s      |   %s    |   %d   # \n",iterator->name,iterator->type_symbole,&(iterator->adress));
		printf("----------------------------------- \n");		 
	iterator = iterator->next;
	}
}

/*
delete every symbol of the table but not the firstOne
*/

void ts_flush(){
	symbole * iterator = firstOne;
	if(firstOne->next != NULL){
		iterator = iterator->next;	
	}else{
		return;
	}
	while(iterator != NULL){
		symbole * aux = iterator;
		iterator = iterator->next;
		free(aux);
	}
}

int main(){
	ts_init();
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
	ts_display();
	ts_flush();
	ts_display();
}
















