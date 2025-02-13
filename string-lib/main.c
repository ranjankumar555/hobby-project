#include<stdio.h>
#include "my_string_lib.h"

int main(void){
	
	/*** 1. my_strcpy ***/
	int length;
	char s[20] = "Ranjan Kumar";
	length = my_strlen(s);
	printf("Length of string = %d\n", length);

	return 0;
}
