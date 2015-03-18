
#define INST_ADD 1
#define INST_MOV 2
#define INST_SUB 3
#define INST_MUL 4
#define INST_DIV 5
#define INST_JUMP 6
#define INST_AFC 7
#define INST_COP 8

typedef struct Stack_Instruction{
        int instruct_params[3];
        struct Stack_Instruction * next_instruct;
        struct Stack_Instruction * before_instruct;
}stack_inst;

void stack_init(stack_inst * inst);

void stack_push(stack_inst * inst_to_add);
stack_inst * stack_pop();

void stack_push_add(int arg1,int arg2);
void stack_push_sub(int arg1,int arg2);
void stack_push_mul(int arg1,int arg2);
void stack_push_div(int arg1,int arg2);
void stack_push_jump(int arg1,int arg2);
void stack_push_mov(int arg1,int arg2);
void stack_push_afc(int arg1);
void stack_push_cop(int arg1);

void print_assembler_insctructions(char * operation, char * op1, char * op2, char * to_print);

