typedef struct jump_struct_stack{
	int from_where;
	int from_to;
	struct jump_struct_stack * next_if;
}Jump_struct;

void while_init_stack(int arg);
void while_fill_from_where(int arg);
void while_add_from_to(int arg);

void if_init_stack(int arg);
void if_fill_from_to(int arg);
void if_add_from_where(int arg);
