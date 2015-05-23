
#define INST_ADD 1
#define INST_MUL 2
#define INST_SUB 3
#define INST_DIV 4
#define INST_COP 5
#define INST_AFC 6
#define INST_JUMP 7
#define INST_JUMP_FALSE 8
#define INST_INF 9
#define INST_SUP 10
#define INST_EQU 11
#define INST_PRI 12
#define INST_JUMP_RETURN 13

int nbre_line;

typedef struct Stack_Instruction{
        int instruct_params[4];
        struct Stack_Instruction * next_instruct;
        struct Stack_Instruction * before_instruct;
}stack_inst;

void stack_init(stack_inst * inst);

void stack_push(stack_inst * inst_to_add);
stack_inst * stack_pop();

int get_number_of_line();

void stack_push_add(int arg1,int arg2,int arg3);
void stack_push_sub(int arg1,int arg2,int arg3);
void stack_push_mul(int arg1,int arg2,int arg3);
void stack_push_div(int arg1,int arg2,int arg3);
void stack_push_jump(int arg1);
void stack_push_jump_return();
void stack_push_jump_false(int arg1,int arg2);
void stack_push_afc(int arg1,int arg2);
void stack_push_cop(int arg1,int arg2);
void stack_push_inf(int arg1,int arg2,int arg3);
void stack_push_sup(int arg1,int arg2,int arg3);
void stack_push_pri(int arg1);
void stack_push_equ(int arg1,int arg2,int arg3);

void print_assembler_insctructions(char * operation, char * op1, char * op2, char * to_print);
void print_all_assembler_instructions();
