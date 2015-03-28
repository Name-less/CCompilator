typedef struct function_struct_stack{
        int addr;
	char * name;
        struct function_struct_stack * next_function;
}Function_struct;

void function_init_stack(int addr,char * name);
void function_add(int addr,char * name);
int function_get_addr(char *);
