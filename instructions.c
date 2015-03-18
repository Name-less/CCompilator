#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tableSymbole.h"
#include "instructions.h"

/*

Ce fichier ne manipule que des adresses qui sont envoyées
par le yacc
On ne différencie pas les variables temporaires des variables de la table des symboles

*/

stack_inst * first_stack;
void stack_init(stack_inst * inst){
	first_stack = malloc(sizeof(stack_inst));
	if(first_stack != NULL){
		first_stack->instruct_params[0] = inst->instruct_params[0];
		first_stack->instruct_params[1] = inst->instruct_params[1];
		first_stack->instruct_params[2] = inst->instruct_params[2];
		first_stack->next_instruct = NULL;
		first_stack->before_instruct = first_stack;
	}else{
		printf("Fail to init stack instruction");
	}
}

/*
push any instructions to the stack
*/

void stack_push(stack_inst * inst_to_add){
	stack_inst * iterator = first_stack;
	if(first_stack->before_instruct == NULL){
		stack_init(inst_to_add);
		return;
	}
	while(iterator->next_instruct != NULL){
		iterator = iterator->next_instruct;
	}
	inst_to_add->before_instruct = iterator;
	iterator->next_instruct = inst_to_add;
}


/*
pop the first instruction on the stack (lifo)
*/

stack_inst * stack_pop(){
	if(first_stack->before_instruct != NULL){
		stack_inst * iterator = first_stack;
		while(iterator->next_instruct != NULL){
			iterator = iterator->next_instruct;
		}
		return iterator;
	}else{
		return NULL;
	}
}

void print_assembler_instructions(stack_inst * inst,char * to_print){

   FILE * fp;

   fp = fopen (to_print, "a+");

	if(INST_ADD == inst->instruct_params[0]){
		fprintf(fp,"ADD %d %d",inst->instruct_params[1],inst->instruct_params[2]);
	}else if(INST_MUL == inst->instruct_params[0]){
		fprintf(fp,"MUL %d %d",inst->instruct_params[1],inst->instruct_params[2]);
	}else if(INST_DIV == inst->instruct_params[0]){
		fprintf(fp,"DIV %d %d",inst->instruct_params[1],inst->instruct_params[2]);
	}else if(INST_SUB == inst->instruct_params[0]){
                fprintf(fp,"SUB %d %d",inst->instruct_params[1],inst->instruct_params[2]);
        }else if(INST_JUMP == inst->instruct_params[0]){
                fprintf(fp,"DIV %d %d",inst->instruct_params[1],inst->instruct_params[2]);
        }else if(INST_MOV == inst->instruct_params[0]){
                fprintf(fp,"MOV %d %d",inst->instruct_params[1],inst->instruct_params[2]);
        }
   
   	fclose(fp);
}

/*
Our function to store instructions in the stack
*/

void_stack_push_afc(int arg1){
	stack_inst * new_inst = malloc(sizeof(stack_inst));
	new_inst->instruct_params[0]=INST_AFC;
        new_inst->instruct_params[1]=arg1;
        new_inst->instruct_params[2]=NULL;
        stack_push(new_inst);

}

void stack_push_add(int arg1, int arg2){
        stack_inst * new_inst = malloc(sizeof(stack_inst));
        new_inst->instruct_params[0]=INST_ADD;
        new_inst->instruct_params[1]=arg1;
        new_inst->instruct_params[2]=arg2;
        stack_push(new_inst);
}

void stack_push_mov(int arg1, int arg2){
        stack_inst * new_inst = malloc(sizeof(stack_inst));
        new_inst->instruct_params[0]=INST_MOV;
        new_inst->instruct_params[1]=arg1;
        new_inst->instruct_params[2]=arg2;
        stack_push(new_inst);
}

void stack_push_sub(int arg1, int arg2){
        stack_inst * new_inst = malloc(sizeof(stack_inst));
        new_inst->instruct_params[0]=INST_SUB;
        new_inst->instruct_params[1]=arg1;
        new_inst->instruct_params[2]=arg2;
        stack_push(new_inst);
}

void stack_push_mul(int arg1, int arg2){
        stack_inst * new_inst = malloc(sizeof(stack_inst));
        new_inst->instruct_params[0]=INST_MUL;
        new_inst->instruct_params[1]=arg1;
        new_inst->instruct_params[2]=arg2;
        stack_push(new_inst);
}

void stack_push_div(int arg1, int arg2){
        stack_inst * new_inst = malloc(sizeof(stack_inst));
        new_inst->instruct_params[0]=INST_DIV;
        new_inst->instruct_params[1]=arg1;
        new_inst->instruct_params[2]=arg2;
        stack_push(new_inst);
}

void stack_push_jump(int arg1, int arg2){
        stack_inst * new_inst = malloc(sizeof(stack_inst));
        new_inst->instruct_params[0]=INST_JUMP;
        new_inst->instruct_params[1]=arg1;
        new_inst->instruct_params[2]=arg2;
        stack_push(new_inst);
}

/*
End of our functions to add instructions to the stack
*/

int main(){
	//print_assembler_instructions((char *)"+",(char *)"a",(char *)"b",(char*)"toto");
}
