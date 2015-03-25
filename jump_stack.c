#include <stdlib.h>
#include <stdio.h>

Jump_if * first_one;

void init_stack(int arg){
	first_one = malloc(sizeof(Jump_if);
	if(first_one != -1){
		first_one->from_where = arg;
		first_one->from_to = 0;
		frist_one->next_if = NULL;
	}
}

void fill_from_to(int arg){
	Jump_if * iterator = first_one;
	if(iterator == NULL){
		init_stack(arg);
	}

	while(iterator != NULL){
		if(iterator->next_if != NULL && iterator->from_to == 0){
			iterator->next_if
		}
		iterator = iterator->next_if;
	}
}
