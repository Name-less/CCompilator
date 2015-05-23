#include <stdlib.h>
#include <stdio.h>
#include "function_stack.h"
#include <string.h>

Function_struct * first_function;
Stack_Pointer * stack_pointer;

int get_stack_pointer(){
	return stack_pointer->addr;
}

int pop_stack_pointer(){
	if(stack_pointer->before_addr != NULL){
		int to_return = stack_pointer->addr;
		stack_pointer = stack_pointer->before_addr;
		return to_return;
	}
	return stack_pointer->addr;
}

void add_stack_value(int addr){
	Stack_Pointer * new_value = (Stack_Pointer *)malloc(sizeof(Stack_Pointer));
	stack_pointer->next_addr = new_value;
	new_value->before_addr = stack_pointer;
	stack_pointer = new_value;
}

int get_addr_function(char * name){
	        Function_struct * aux = first_function;
        while(aux != NULL){
                if(strcmp(name,aux->name) == 0){
                        return aux->addr_jump;
                }
        aux = aux->next_function;
        }
        return -1;

}

int function_exist(char * name){
	Function_struct * aux = first_function;
	while(aux != NULL){
		if(strcmp(name,aux->name) == 0){
			return 1;
		}
	aux = aux->next_function;
	}
	return -1;
}

void add_function(char * name,int addr_jump){
	Function_struct * aux = first_function;
	while(aux->next_function != NULL){
		aux = aux->next_function;
	}
	Function_struct * new_element =  (Function_struct *)malloc(sizeof(Function_struct));
	new_element->addr_jump = addr_jump;
	new_element->next_function = NULL;
	new_element->name = name;
	aux->next_function = new_element;
}
