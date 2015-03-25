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
		first_stack->instruct_params[3] = inst->instruct_params[3];
		first_stack->next_instruct = NULL;
		first_stack->before_instruct = first_stack;
		nbre_line = 1;
	}else{
		printf("Fail to init stack instruction");
	}
}

/*
push any instructions to the stack
*/

void stack_push(stack_inst * inst_to_add){
	stack_inst * iterator = first_stack;
	if(first_stack == NULL){
		stack_init(inst_to_add);
		return;
	}
	while(iterator->next_instruct != NULL){
		iterator = iterator->next_instruct;
	}
	inst_to_add->before_instruct = iterator;
	iterator->next_instruct = inst_to_add;
	nbre_line++;
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
		fprintf(fp,"ADD %d %d %d\n",inst->instruct_params[1],inst->instruct_params[2],inst->instruct_params[3]);
	}else if(INST_MUL == inst->instruct_params[0]){
		fprintf(fp,"MUL %d %d %d\n",inst->instruct_params[1],inst->instruct_params[2],inst->instruct_params[3]);
	}else if(INST_DIV == inst->instruct_params[0]){
		fprintf(fp,"DIV %d %d %d\n",inst->instruct_params[1],inst->instruct_params[2],inst->instruct_params[3]);
	}else if(INST_SUB == inst->instruct_params[0]){
                fprintf(fp,"SUB %d %d %d\n",inst->instruct_params[1],inst->instruct_params[2],inst->instruct_params[3]);
        }else if(INST_JUMP == inst->instruct_params[0]){
                fprintf(fp,"JUMP %d %d\n",inst->instruct_params[1],inst->instruct_params[2]);
        }else if(INST_MOV == inst->instruct_params[0]){
                fprintf(fp,"MOV %d %d\n",inst->instruct_params[1],inst->instruct_params[2]);
        }else if(INST_AFC == inst->instruct_params[0]){
                fprintf(fp,"AFC %d %d \n",inst->instruct_params[1],inst->instruct_params[2]);
        }else if(INST_COP == inst->instruct_params[0]){
                fprintf(fp,"COP %d %d\n",inst->instruct_params[1],inst->instruct_params[2]);
        }else if(INST_STORE == inst->instruct_params[0]){
                fprintf(fp,"STORE %d %d\n",inst->instruct_params[1],inst->instruct_params[2]);
        }else if(INST_LOAD == inst->instruct_params[0]){
                fprintf(fp,"LOAD %d %d\n",inst->instruct_params[1],inst->instruct_params[2]);
        }
   
   	fclose(fp);
}

void print_all_assembler_instructions(){
	char * file_name = (char *)"toto";
	stack_inst * iterator = first_stack;
	while(iterator != NULL){
		print_assembler_instructions(iterator,file_name);
		iterator = iterator->next_instruct;
	}
}

/*
Our function to store instructions in the stack
*/

void stack_push_afc(int arg1,int arg2){
	stack_inst * new_inst = malloc(sizeof(stack_inst));
	new_inst->instruct_params[0]=INST_AFC;
        new_inst->instruct_params[1]=arg1;
        new_inst->instruct_params[2]=arg2;
        new_inst->instruct_params[3]=-1;
        stack_push(new_inst);
}

void stack_push_cop(int arg1,int arg2){
	printf("erreur dans cop debut\n");
        stack_inst * new_inst = malloc(sizeof(stack_inst));
        new_inst->instruct_params[0]=INST_AFC;
        new_inst->instruct_params[1]=arg1;
        new_inst->instruct_params[2]=arg2;
        new_inst->instruct_params[3]=-1;
        stack_push(new_inst);
	printf("erreur dans cop fin\n");

}

void stack_push_load(int arg1,int arg2){
        stack_inst * new_inst = malloc(sizeof(stack_inst));
        new_inst->instruct_params[0]=INST_AFC;
        new_inst->instruct_params[1]=arg1;
        new_inst->instruct_params[2]=arg2;
        new_inst->instruct_params[3]=-1;
        stack_push(new_inst);

}

void stack_push_store(int arg1,int arg2){
        stack_inst * new_inst = malloc(sizeof(stack_inst));
        new_inst->instruct_params[0]=INST_AFC;
        new_inst->instruct_params[1]=arg1;
        new_inst->instruct_params[2]=arg2;
        new_inst->instruct_params[3]=-1;
        stack_push(new_inst);

}

void stack_push_add(int arg1, int arg2,int arg3){
        stack_inst * new_inst = malloc(sizeof(stack_inst));
        new_inst->instruct_params[0]=INST_ADD;
        new_inst->instruct_params[1]=arg1;
        new_inst->instruct_params[2]=arg2;
        new_inst->instruct_params[3]=arg3;
        stack_push(new_inst);
}

void stack_push_mov(int arg1, int arg2){
        stack_inst * new_inst = malloc(sizeof(stack_inst));
        new_inst->instruct_params[0]=INST_MOV;
        new_inst->instruct_params[1]=arg1;
        new_inst->instruct_params[2]=arg2;
        new_inst->instruct_params[3]=-1;
        stack_push(new_inst);
}

void stack_push_sub(int arg1, int arg2,int arg3){
        stack_inst * new_inst = malloc(sizeof(stack_inst));
        new_inst->instruct_params[0]=INST_SUB;
        new_inst->instruct_params[1]=arg1;
        new_inst->instruct_params[2]=arg2;
        new_inst->instruct_params[3]=arg3;
        stack_push(new_inst);
}

void stack_push_mul(int arg1, int arg2,int arg3){
        stack_inst * new_inst = malloc(sizeof(stack_inst));
        new_inst->instruct_params[0]=INST_MUL;
        new_inst->instruct_params[1]=arg1;
        new_inst->instruct_params[2]=arg2;
        new_inst->instruct_params[3]=arg3;
        stack_push(new_inst);
}

void stack_push_div(int arg1, int arg2,int arg3){
        stack_inst * new_inst = malloc(sizeof(stack_inst));
        new_inst->instruct_params[0]=INST_DIV;
        new_inst->instruct_params[1]=arg1;
        new_inst->instruct_params[2]=arg2;
        new_inst->instruct_params[3]=arg3;
        stack_push(new_inst);
}

void stack_push_jump(int arg1, int arg2){
        stack_inst * new_inst = malloc(sizeof(stack_inst));
        new_inst->instruct_params[0]=INST_JUMP;
        new_inst->instruct_params[1]=arg1;
        new_inst->instruct_params[2]=arg2;
        new_inst->instruct_params[3]=-1;
	stack_push(new_inst);
}

/*
End of our functions to add instructions to the stack
*/

/*int main(){
	stack_push_jump(3,4);
	stack_push_afc(3,4);
	print_all_assembler_instructions();	
}*/
