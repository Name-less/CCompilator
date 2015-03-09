#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
