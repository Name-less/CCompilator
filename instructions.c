#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tableSymbole.c"
/*

Ce fichier ne manipule que des adresses qui sont envoyées
par le yacc
On ne différencie pas les variables temporaires des variables de la table des symboles

*/
struct Stack_Instruction{
	int [3] instruct_params;
	stack_inst * next_instruct;
	stack_inst * before_instruct;
}stack_inst;

stack_inst * first_stack;
void stack_init(int cop,int arg1,int arg2){
	first_stack = malloc(sizeof(stack_inst));
	if(first_stack != NULL){
		first_stack->instruct_params[0] = cop;
		first_stack->instruct_params[1] = arg1;
		first_stack->instruct_params[2] = arg2;
		first_stack->next_instruct = NULL;
		first_stack->before_instruct = NULL;
	}else{
		printf("Fail to init stack instruction");
	}
}

void stack_push(stack_inst * inst_to_add){
	stack_inst * iterator = first_stack;
	while(iterator->next_instruct != NULL){
		iterator = iterator->next_instruct;
	}
	inst_to_add->before_instruct = iterator;
	iterator->next_instruct = inst_to_add;
}

void stack_push_add(int arg1, int arg2){
	stack_inst * new_inst = malloc(sizeof(stack_inst));
	new_inst->instruct_params[0]=INST_ADD;
	new_inst->instruct_params[1]=arg1;
	new_inst->instruct_params[2]=arg2;
}



void print_assembler_instructions(char * operation, char * op1,char * op2,char * to_print){

   FILE * fp;

   fp = fopen (to_print, "a+");

	if(strcmp(operation,"+") == 0){
		fprintf(fp,"ADD %s %s",op1,op2);
	}else if(strcmp(operation,"-") == 0){
                fprintf(fp,"SUB %s %s",op1,op2);
	}else if(strcmp(operation,"*") == 0){
                fprintf(fp,"MUL %s %s",op1,op2);
	}else if(strcmp(operation,"/") == 0){
                fprintf(fp,"DIV %s %s",op1,op2);
	}
   
   	fclose(fp);
}

int main(){
	print_assembler_instructions((char *)"+",(char *)"a",(char *)"b",(char*)"toto");
}
