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

symbole * lastOne;
int ts_init(){
	lastOne = (symbole *)malloc(sizeof(struct Symbole));
	if(lastOne != NULL){
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
		newSymbole->before = lastOne;
		lastOne->next = newSymbole;
		lastOne = newSymbole;
		return 1;
	}else{
		return -1;
	}
}

int exist(char * name){
	symbole * iterator = lastOne;
	while(iterator->before != NULL){
		if(*iterator->name == *name){
			return -1;
		}else{
			iterator = lastOne->before;
		}
	}
	return 1;
}

int ts_pop(char * name){
        symbole * iterator = lastOne;
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
	symbole * iterator = lastOne;
	printf("########## Symbole Table ########## \n");
	printf("#    Name  |    Type   |  Adress  # \n"); 
	printf("################################### \n"); 
	while(iterator != NULL){
		printf("----------------------------------- \n");
		printf("#      %s      |   %s    |   %d   # \n",iterator->name,iterator->type_symbole,*(iterator->adress));
		printf("----------------------------------- \n");		 
	iterator = iterator->before;
	}
}

int main(){
	ts_init();
	ts_display();
}
















