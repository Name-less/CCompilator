#include <stdlib.h>
#include <stdio.h>
#include "tableSymbole.h"

typedef struct Symbole {
	char * type_symbole;
	char * name;
	int * adress;
	struct Symbole * next;
	struct Symbole * before;
}symbole;

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

int ts_push(char * name,char * type_symbole){
	if(exist(name) == 1){
		symbole * newSymbole = (symbole *)malloc(sizeof(struct Symbole));
		newSymbole->name = name;
		newSymbole->type_symbole = type_symbole;
		newSymbole->before = firstOne;
		firstOne->next = newSymbole;
		firstOne = newSymbole;
		return 1;
	}else{
		return -1;
	}
}

int exist(char * name){
	symbole * iterator = firstOne;
	while(iterator->before != NULL){
		if(*iterator->name == *name){
			return -1;
		}else{
			iterator = firstOne->before;
		}
	}
	return 1;
}

int ts_pop(char * name){
        symbole * iterator = firstOne;
        while(iterator->before != NULL){
                if(*iterator->name == *name){
                        iterator->before->next = iterator->next;
                }else{
                        iterator = iterator->before;
                }
        }
        return 1;
}

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

int main(){
	ts_init();
	//printf("%s %s %d et \n",firstOne->name,firstOne->type_symbole,firstOne->adress);
	ts_push((char *)"a",(char *)"const");
	ts_push((char *)"a",(char *)"const");
	ts_push((char *)"b",(char *)"const");
	ts_push((char *)"a",(char *)"const");
	ts_display();
}
















