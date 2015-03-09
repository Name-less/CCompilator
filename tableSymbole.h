int ts_push(char * name,char * type_symbole);

int ts_pop(char * name);
int ts_pop_last();
int ts_pop_addr(int addr);

int get_addr_from(char * name);
char * get_symbol_at(int addr);

int ts_init();
int exist(char * name);
void ts_display();
void ts_flush();
