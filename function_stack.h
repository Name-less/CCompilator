typedef struct function_struct_stack{
        int addr_jump;
	char * name;
        struct function_struct_stack * next_function;
}Function_struct;

typedef struct function_stack_pointer_stack{
	int addr;
	struct function_stack_pointer_stack * before_addr;
	struct function_stack_pointer_stack * next_addr;
}Stack_Pointer;

int get_stack_pointer();

int function_exist(char * name);
void add_function(char * name, int addr_jump);
void add_stack_value(int addr);
int pop_stack_pointer();
