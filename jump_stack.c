#include <stdlib.h>
#include <stdio.h>
#include "jump_stack.h"

Jump_struct * first_one;
Jump_struct * first_one_while;

void if_init_stack(int arg){
	first_one = malloc(sizeof(Jump_struct));
	if(first_one != NULL){
		first_one->from_where = arg;
		first_one->from_to = 0;
		first_one->next_if = NULL;
	}
}

void if_fill_from_to(int arg){
	Jump_struct * iterator = first_one;

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

void if_add_from_where(int arg){
	Jump_struct * iterator = first_one;
        if(iterator == NULL){
                if_init_stack(arg);
		return;
        }
	while(iterator->next_if != NULL){
		iterator = iterator->next_if;
	}
	Jump_struct * to_add = malloc(sizeof(Jump_struct));
	to_add->from_where = arg;
	to_add->from_to = 0;
	to_add->next_if = NULL;
	iterator->next_if = to_add;
}

void while_fill_from_where(int arg){
        Jump_struct * iterator = first_one_while;

        int find = 0;
        while(iterator != NULL && find == 0){
                if(iterator->next_if != NULL){
                        if((iterator->next_if)->from_where != 0){
                                iterator->from_where = arg;
                                find = 1;
                        }else{
                                iterator = iterator->next_if;
                        }
                }else{
                        iterator->from_where = arg;
                        find = 1;
                }
        }

}

void while_init_stack(int arg){
        first_one_while = malloc(sizeof(Jump_struct));
        if(first_one_while != NULL){
                first_one_while->from_where = arg;
                first_one_while->from_to = 0;
                first_one_while->next_if = NULL;
        }
}

void while_add_from_to(int arg){
        Jump_struct * iterator = first_one_while;
        if(iterator == NULL){
                while_init_stack(arg);
                return;
        }
        while(iterator->next_if != NULL){
                iterator = iterator->next_if;
        }
        Jump_struct * to_add = malloc(sizeof(Jump_struct));
        to_add->from_to = arg;
        to_add->from_where = 0;
        to_add->next_if = NULL;
        iterator->next_if = to_add;
}

int main(){
	while_add_from_to(6);
	while_add_from_to(5);
	while_fill_from_where(10);
}
