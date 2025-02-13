#include "my_string_lib.h"

unsigned int my_strlen(const char* str){
	
	int i=0;
	while(*(str + i)){
		
		i++;
	}
	return i;
}
