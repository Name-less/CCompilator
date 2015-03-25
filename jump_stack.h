typedef struct jump_if_stack{
	int from_where;
	int from_to;
	struct jump_if_stack * next_if;
}Jump_if;

void init_stack(int arg);

void fill_from_to(int arg);
void add_from_where(int arg);
