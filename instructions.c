#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * get_assembler_instructions(char * operation, char * op1,char * op2){

	if(strncmp(operation,"+",sizeof(operation)) == 0){
		char * to_return = "";
		strcat(to_return,"ADD ");
		strcat(to_return,op1);
		strcat(to_return," ");
		strcat(to_return,op2);
		return to_return;
	}else if(strncmp(operation,"-",sizeof(operation)) == 0){
                char * to_return = "";
                strcat(to_return,"ADD ");
                strcat(to_return,op1);
                strcat(to_return," ");
                strcat(to_return,op2);
                return to_return;
	}else if(strncmp(operation,"*",sizeof(operation)) == 0){
                char * to_return = "";
                strcat(to_return,"ADD ");
                strcat(to_return,op1);
                strcat(to_return," ");
                strcat(to_return,op2);
                return to_return;
	}else if(strncmp(operation,"/",sizeof(operation)) == 0){
                char * to_return = "";
                strcat(to_return,"ADD ");
                strcat(to_return,op1);
                strcat(to_return," ");
                strcat(to_return,op2);
                return to_return;
	}
	return NULL;
}

int main(){
	printf("%s \n",get_assembler_instructions((char *)"+",(char *)"a",(char *)"b"));
	printf("%s \n",get_assembler_instructions((char *)"*",(char *)"a",(char *)"b"));
	printf("%s \n",get_assembler_instructions((char *)"-",(char *)"a",(char *)"b"));
	printf("%s \n",get_assembler_instructions((char *)"/",(char *)"a",(char *)"b"));
}
