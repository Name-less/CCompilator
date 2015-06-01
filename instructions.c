#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tableSymbole.h"
#include "instructions.h"
#include "function_stack.h"

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

int get_number_of_line(){
	return nbre_line;
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
                fprintf(fp,"SOU %d %d %d\n",inst->instruct_params[1],inst->instruct_params[2],inst->instruct_params[3]);
        }else if(INST_JUMP == inst->instruct_params[0]){
                fprintf(fp,"JMP %d\n",inst->instruct_params[1]);
        }else if(INST_AFC == inst->instruct_params[0]){
                fprintf(fp,"AFC %d %d \n",inst->instruct_params[1],inst->instruct_params[2]);
        }else if(INST_COP == inst->instruct_params[0]){
                fprintf(fp,"COP %d %d\n",inst->instruct_params[1],inst->instruct_params[2]);
        }else if(INST_JUMP_FALSE == inst->instruct_params[0]){
                fprintf(fp,"JMF %d %d\n",inst->instruct_params[1],inst->instruct_params[2]);
        }else if(INST_EQU == inst->instruct_params[0]){
                fprintf(fp,"EQU CR %d %d\n",inst->instruct_params[1],inst->instruct_params[2],inst->instruct_params[3]);
        }else if(INST_PRI == inst->instruct_params[0]){
                fprintf(fp,"PRI %d\n",inst->instruct_params[1]);
        }else if(INST_INF == inst->instruct_params[0]){
                fprintf(fp,"INF CR %d %d\n",inst->instruct_params[1],inst->instruct_params[2],inst->instruct_params[3]);
        }else if(INST_SUP == inst->instruct_params[0]){
                fprintf(fp,"SUP CR %d %d\n",inst->instruct_params[1],inst->instruct_params[2],inst->instruct_params[3]);
        }else if(INST_JUMP_RETURN == inst->instruct_params[0]){
                fprintf(fp,"JMP SP\n");
        }else if(INST_PUSH_SP == inst->instruct_params[0]){
		fprintf(fp,"PUSH SP \n");
	}else if(INST_POP_SP == inst->instruct_params[0]){
                fprintf(fp,"POP SP \n");
        }else if(INST_AFC_REGISTER == inst->instruct_params[0]){
                fprintf(fp,"AFC R%d %d \n",inst->instruct_params[1],inst->instruct_params[2]);
        }else if(INST_AFC_FROM_REG == inst->instruct_params[0]){
                fprintf(fp,"AFC %d R%d \n",inst->instruct_params[1],inst->instruct_params[2]);
        }else if(INST_POP == inst->instruct_params[0]){
                fprintf(fp,"POP %d \n",inst->instruct_params[1]);
        }else if(INST_PUSH == inst->instruct_params[0]){
                fprintf(fp,"PUSH %d \n",inst->instruct_params[1]);
        }else if(INST_EQU_T == inst->instruct_params[0]){
                fprintf(fp,"EQU %d %d %d \n",inst->instruct_params[1],inst->instruct_params[2],inst->instruct_params[3]);
        }else if(INST_JMF_CR == inst->instruct_params[0]){
                fprintf(fp,"JMF %d CR \n",inst->instruct_params[1]);
        }else if(INST_NOP == inst->instruct_params[0]){
                fprintf(fp,"NOP\n");
        }else if(INST_ADD_CR == inst->instruct_params[0]){
                fprintf(fp,"ADD CR CR %d\n",inst->instruct_params[1]);
        }else if(INST_INV_CR == inst->instruct_params[0]){
                fprintf(fp,"MUL CR CR -1\n");
        }else if(INST_POP_CR == inst->instruct_params[0]){
                fprintf(fp,"POP CR\n");
        }else if(INST_PUSH_CR == inst->instruct_params[0]){
                fprintf(fp,"PUSH CR\n");
        }else if(INST_AFC_CR == inst->instruct_params[0]){
                fprintf(fp,"AFC CR %d \n",inst->instruct_params[1]);
        }else if(INST_AFC_SP == inst->instruct_params[0]){
                fprintf(fp,"AFC SP %d \n",inst->instruct_params[1]);
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

void stack_push_inv_cr(int arg1){
        stack_inst * new_inst = malloc(sizeof(stack_inst));
        new_inst->instruct_params[0]=INST_INV_CR;
        stack_push(new_inst);
}


void stack_push_push_cr(int arg1){
        stack_inst * new_inst = malloc(sizeof(stack_inst));
        new_inst->instruct_params[0]=INST_PUSH_CR;
        stack_push(new_inst);
}

void stack_push_afc_cr(int arg){
        stack_inst * new_inst = malloc(sizeof(stack_inst));
        new_inst->instruct_params[0]=INST_AFC_CR;
	new_inst->instruct_params[1]=arg;
        stack_push(new_inst);
}

void stack_push_afc_sp(int arg){
        stack_inst * new_inst = malloc(sizeof(stack_inst));
        new_inst->instruct_params[0]=INST_AFC_SP;
        new_inst->instruct_params[1]=arg;
        stack_push(new_inst);
}



void stack_push_pop_cr(){
        stack_inst * new_inst = malloc(sizeof(stack_inst));
        new_inst->instruct_params[0]=INST_POP_CR;
        stack_push(new_inst);
}


void stack_push_add_cr(int arg1){
        stack_inst * new_inst = malloc(sizeof(stack_inst));
        new_inst->instruct_params[0]=INST_ADD_CR;
        new_inst->instruct_params[1]=arg1;
        stack_push(new_inst);
}

void stack_push_afc(int arg1,int arg2){
	stack_inst * new_inst = malloc(sizeof(stack_inst));
	new_inst->instruct_params[0]=INST_AFC;
        new_inst->instruct_params[1]=arg1;
        new_inst->instruct_params[2]=arg2;
        new_inst->instruct_params[3]=-1;
        stack_push(new_inst);
}

void stack_push_cop(int arg1,int arg2){
        stack_inst * new_inst = malloc(sizeof(stack_inst));
        new_inst->instruct_params[0]=INST_COP;
        new_inst->instruct_params[1]=arg1;
        new_inst->instruct_params[2]=arg2;
        new_inst->instruct_params[3]=-1;
        stack_push(new_inst);
}

void stack_push_inf(int arg1,int arg2,int arg3){
        stack_inst * new_inst = malloc(sizeof(stack_inst));
        new_inst->instruct_params[0]=INST_INF;
        new_inst->instruct_params[1]=arg1;
        new_inst->instruct_params[2]=arg2;
        new_inst->instruct_params[3]=arg3;
        stack_push(new_inst);

}

void stack_push_nop(){
        stack_inst * new_inst = malloc(sizeof(stack_inst));
        new_inst->instruct_params[0]=INST_NOP;
        stack_push(new_inst);
}

void stack_push_sup(int arg1,int arg2,int arg3){
        stack_inst * new_inst = malloc(sizeof(stack_inst));
        new_inst->instruct_params[0]=INST_SUP;
        new_inst->instruct_params[1]=arg1;
        new_inst->instruct_params[2]=arg2;
        new_inst->instruct_params[3]=arg3;
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

void stack_push_equ(int arg1, int arg2,int arg3){
        stack_inst * new_inst = malloc(sizeof(stack_inst));
        new_inst->instruct_params[0]=INST_EQU;
        new_inst->instruct_params[1]=arg1;
        new_inst->instruct_params[2]=arg2;
        new_inst->instruct_params[3]=arg3;
        stack_push(new_inst);
}

void stack_push_equ_t(int arg1, int arg2,int arg3){
        stack_inst * new_inst = malloc(sizeof(stack_inst));
        new_inst->instruct_params[0]=INST_EQU_T;
        new_inst->instruct_params[1]=arg1;
        new_inst->instruct_params[2]=arg2;
        new_inst->instruct_params[3]=arg3;
        stack_push(new_inst);
}

void stack_push_pri(int arg1){
        stack_inst * new_inst = malloc(sizeof(stack_inst));
        new_inst->instruct_params[0]=INST_PRI;
        new_inst->instruct_params[1]=arg1;
        new_inst->instruct_params[2]=-1;
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

void stack_push_jump(int arg1){
        stack_inst * new_inst = malloc(sizeof(stack_inst));
        new_inst->instruct_params[0]=INST_JUMP;
        new_inst->instruct_params[1]=arg1;
        new_inst->instruct_params[2]=-1;
        new_inst->instruct_params[3]=-1;
        stack_push(new_inst);
}

void stack_push_jump_return(){
        stack_inst * new_inst = malloc(sizeof(stack_inst));
        new_inst->instruct_params[0]=INST_JUMP_RETURN;
        stack_push(new_inst);
}

void stack_push_push_sp(){
        stack_inst * new_inst = malloc(sizeof(stack_inst));
        new_inst->instruct_params[0]=INST_PUSH_SP;
        stack_push(new_inst);
}
void stack_push_pop_sp(){
        stack_inst * new_inst = malloc(sizeof(stack_inst));
        new_inst->instruct_params[0]=INST_POP_SP;
        stack_push(new_inst);
}

void stack_push_pop(int arg){
        stack_inst * new_inst = malloc(sizeof(stack_inst));
        new_inst->instruct_params[0]=INST_POP;
        new_inst->instruct_params[1]=arg;
	stack_push(new_inst);
}

void stack_push_push(int arg){
        stack_inst * new_inst = malloc(sizeof(stack_inst));
        new_inst->instruct_params[0]=INST_PUSH;
	new_inst->instruct_params[1]=arg;
        stack_push(new_inst);
}

void stack_push_jump_false(int arg1, int arg2){
        stack_inst * new_inst = malloc(sizeof(stack_inst));
        new_inst->instruct_params[0]=INST_JUMP_FALSE;
        new_inst->instruct_params[1]=arg1;
        new_inst->instruct_params[2]=arg2;
        new_inst->instruct_params[3]=-1;
	stack_push(new_inst);
}

void stack_push_jump_false_cr(int arg1){
        stack_inst * new_inst = malloc(sizeof(stack_inst));
        new_inst->instruct_params[0]=INST_JMF_CR;
        new_inst->instruct_params[1]=arg1;
        stack_push(new_inst);
}

void stack_push_afc_register(int arg1,int arg2){
        stack_inst * new_inst = malloc(sizeof(stack_inst));
        new_inst->instruct_params[0]=INST_AFC_REGISTER;
        new_inst->instruct_params[1]=arg1;
        new_inst->instruct_params[2]=arg2;
        stack_push(new_inst);
}

void stack_push_afc_from_register(int arg1,int arg2){
        stack_inst * new_inst = malloc(sizeof(stack_inst));
        new_inst->instruct_params[0]=INST_AFC_FROM_REG;
        new_inst->instruct_params[1]=arg1;
        new_inst->instruct_params[2]=arg2;
        stack_push(new_inst);
}

/*
End of our functions to add instructions to the stack
*/

/*int main(){
	stack_push_jump(3);
	stack_push_afc(3,4);
	stack_push_add(3,4,8);
	stack_push_sub(5,6,4);
	stack_push_mul(5,7,3);
	stack_push_add(5,5,7);
	stack_push_pri(5);
	stack_push_jump_false(9,10);
	stack_push_inf(1,90,56);
	stack_push_sup(14,5,34);
	stack_push_equ(6,4,9);
	print_all_assembler_instructions();	
}*/
