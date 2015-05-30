#include <stdlib.h>
#include <stdio.h>
#include "jump_stack.h"

Jump_struct * first_one;
Jump_struct * first_one_while;

int get_nested_condition(){
	return nested_condition;
}
void set_nested_condition(int arg){
	nested_condition = arg;
}

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
	printf("CALL WITH %d\n",arg);
	int find = 0;
	while(iterator != NULL && find == 0){
		printf("FROM WHERE %d %d \n",iterator->from_where,iterator->from_to);
		if(iterator->next_if != NULL && (iterator->next_if)->from_to == 0){
			iterator = iterator->next_if;
		}else{
			//printf("################### 1 ELSE FROM TO FILL %d %d\n",iterator->from_where,iterator->from_to);
			if(iterator->from_to == 0){
			if(iterator->next_if!=NULL){
			//printf("################### 1 WHEN FILLLLLL TO FILL %d %d\n",(iterator->next_if)->from_where,(iterator->next_if)->from_to);
			}else{
			//printf("################### 1 WHEN FILLLLLL TO FILL \n");
			}
				iterator->from_to = arg;
				find = 1;
			}else{
				iterator = iterator->next_if;
			}
			//printf("################### 2 ELSE FROM TO FILL %d %d\n",iterator->from_where,iterator->from_to);
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

void while_init_stack(int arg){
        first_one_while = malloc(sizeof(Jump_struct));
        if(first_one_while != NULL){
                first_one_while->from_where = 0;
                first_one_while->from_to = arg;
                first_one_while->next_if = NULL;
        }
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

void parse_and_modify_file(char * file_name,char * new_file){ //après avoir fait printer les instructions asm via print_all_sembleur
//on lance parse_and_modify_file pour rajouter les sauts au fichier file_name dans new_file
	// ANTHO: commenté car genant pour la compile
	//int current_delta_line = 0; 
	int current_line = 0;
	char line[256];

	FILE * fp;
	fp = fopen (new_file, "a+");
	
	FILE * old_file;
	old_file = fopen(file_name,"r");

	//while stack
	Jump_struct * iterator = first_one_while;
	Jump_struct * iterator_if = first_one;
	while(fgets(line,sizeof(line),old_file) != NULL){
		iterator = first_one_while;
		iterator_if = first_one;
		Jump_struct * aux = iterator;
		Jump_struct * aux_if = iterator_if;
		int next_line = 0;
		int next_line_if = 0;
		while(iterator != NULL && next_line == 0){
			//printf("while loop nbr line %d actual from where %d \n",current_line,iterator->from_where);
			if(current_line+1 == iterator->from_where){
				printf("PUT something \n");
		 		fprintf(fp,"JMF %d CR\n",iterator->from_to);	
				aux->next_if = iterator->next_if;
				next_line = 1;
			}
			aux=iterator;
			iterator = iterator->next_if;
		}
                while(iterator_if != NULL && next_line_if == 0){
                        //printf("while loop nbr line equal from where %d AND %d \n",current_line,iterator_if->from_where);
                        if(current_line == iterator_if->from_where){
                                printf("PUT something \n");
                                fprintf(fp,"JMF %d CR\n",iterator_if->from_to);
                                aux_if->next_if = iterator_if->next_if;
                                next_line_if = 1;
                        }
                        aux_if=iterator_if;
                        iterator_if = iterator_if->next_if;
                }
		fprintf(fp,"%s",line);
		current_line++;
	}

}

/*int main(){
	while_add_from_to(2);
	while_fill_from_where(4);
	while_add_from_to(5);
	while_fill_from_where(6);
	if_add_from_where(8);
	if_fill_from_to(10);
	parse_and_modify_file((char *)"toto",(char *)"tata");
}*/
