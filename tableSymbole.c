#include <stdlib.h>
#include <tableSymbole.h>

struct Symbole {
	char * type;
	char * name;
	int * adress;
	Symbole * next;
	Symbole * before;
}symbole;

Symbole * lastOne;
int ts_init(){
	lastOne = (Symbole *)malloc(sizeof(struct Symbole));
	if(lastOne != NULL){
		return 1;
	}else{
		return -1;
	}
}

int ts_create(char * name,char * type){
	if(exist(name) == 1){
		Symbole * newSymbole = (Symbole *)malloc(sizeof(struct Symbole));
		newSymbole.name = name;
		newSymbole.type = type;
		newSymbole.before = lastOne;
		lastOne.next = newSymbole;
		lastOne = new Symbole;
		return 1;
	}else{
		return -1;
	}
}

int exist(char * name){
	Symbole * iterator = lastOne;
	while(iterator.before != NULL){
		if(*iterator.name == *name){
			return -1;
		}else{
			iterator = lastOne.before;
		}
	}
	return 1;
}

int ts_delete(char * name){
        Symbole * iterator = lastOne;
        while(iterator.before != NULL){
                if(*iterator.name == *name){
                        iterator.before.next = iterator.next;
                }else{
                        iterator = lastOne.before;
                }
        }
        return 1;
}
