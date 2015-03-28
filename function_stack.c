#include <stdlib.h>
#include <stdio.h>
#include "function_stack.h"
#include <string.h>

Function_struct * first_one;

void function_init_stack(int addr,char * name){
        first_one = malloc(sizeof(Function_struct));
        if(first_one != NULL){
                first_one->addr = addr;
                first_one->name = name;
                first_one->next_function = NULL;
        }
}

int function_add(int addr,char * name){
        Function_struct * to_add = malloc(sizeof(Function_struct));
	to_add->addr = addr;
	to_add->name = name;
	Function_struct * iterator = first_one;
	if(iterator == NULL){
		function_init_stack(addr,name);
		return addr;
	}
        while(iterator->next_function != NULL){
		if(strcmp(iterator->name,name) == 0){
			return -1;
		}
               iterator = iterator->next_function;
        }
	iterator->next_function = to_add;
	return addr;
}

int function_get_addr(char * name){
        Function_struct * iterator = first_one;
        while(iterator != NULL){
		if(strcmp(iterator->name,name) == 0){
			return iterator->addr;
		}
		iterator = iterator->next_function;
        }
	return -1;
}

