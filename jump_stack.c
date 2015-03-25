#include <stdlib.h>
#include <stdio.h>
#include "jump_stack.h"

Jump_if * first_one;

void init_stack(int arg){
	first_one = malloc(sizeof(Jump_if));
	if(first_one != NULL){
		first_one->from_where = arg;
		first_one->from_to = 0;
		first_one->next_if = NULL;
	}
}

void fill_from_to(int arg){
	Jump_if * iterator = first_one;

	int find = 0;
	while(iterator != NULL && find == 0){
		if(iterator->next_if != NULL){
			if((iterator->next_if)->from_to != 0){
				iterator->from_to = arg;
				find = 1;
			}else{
				iterator = iterator->next_if;
			}
		}else{
			iterator->from_to = arg;
			find = 1;
		}
	}
}

void add_from_where(int arg){
	Jump_if * iterator = first_one;
        if(iterator == NULL){
                init_stack(arg);
		return;
        }
	while(iterator->next_if != NULL){
		iterator = iterator->next_if;
	}
	Jump_if * to_add = malloc(sizeof(Jump_if));
	to_add->from_where = arg;
	to_add->from_to = 0;
	to_add->next_if = NULL;
	iterator->next_if = to_add;
}

int main(){
	add_from_where(4);
	add_from_where(7);
	add_from_where(6);
	add_from_where(5);
	fill_from_to(10);
}
