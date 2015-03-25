
#define INST_ADD 0x01
#define INST_MOV 20
#define INST_SUB 0x03
#define INST_MUL 0x02
#define INST_DIV 0x04
#define INST_JUMP 19
#define INST_AFC 0x06
#define INST_COP 0x05
#define INST_LOAD 0x07
#define INST_STORE 0x08

int nbre_line;

typedef struct Stack_Instruction{
        int instruct_params[4];
        struct Stack_Instruction * next_instruct;
        struct Stack_Instruction * before_instruct;
}stack_inst;

void stack_init(stack_inst * inst);

void stack_push(stack_inst * inst_to_add);
stack_inst * stack_pop();

void stack_push_add(int arg1,int arg2,int arg3);
void stack_push_sub(int arg1,int arg2,int arg3);
void stack_push_mul(int arg1,int arg2,int arg3);
void stack_push_div(int arg1,int arg2,int arg3);
void stack_push_jump(int arg1,int arg2);
void stack_push_mov(int arg1,int arg2);
void stack_push_afc(int arg1,int arg2);
void stack_push_cop(int arg1,int arg2);
void stack_push_store(int arg1,int arg2);
void stack_push_load(int arg1,int arg2);

void print_assembler_insctructions(char * operation, char * op1, char * op2, char * to_print);
void print_all_assembler_instructions();
