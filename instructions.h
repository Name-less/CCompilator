
#define INST_ADD;

void stack_init(int cop,int arg1,int arg2);

void stack_push(stack_inst * inst_to_add);

void stack_push_add(int arg1,int arg2);

void print_assembler_insctructions(char * operation, char * op1, char * op2, char * to_print);

