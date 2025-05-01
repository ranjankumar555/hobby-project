#include "my_string_lib.h"
void my_strcat(char* str1, const char* str2){
	int i=0, j=0;

	//find the length of string 1.
	while(*(str1 + i)){
		i++;
	}
	
	// copy charcter of string 2 in string 1.
	while(*(str2+j)){
		*(str1+i) = *(str2+j);
		i++;
		j++;
	}
	*(str1+i) = '\0';
}
void my_strncat(char* str1, const char* str2, unsigned int n){
	int i=0, j=0;

	//find the length of string 1.
	while(*(str1 + i)){
		i++;
	}
	
	// copy n charcter of string 2 in string 1.
	while(*(str2+j) && j<n){
		*(str1+i) = *(str2+j);
		i++;
		j++;
	}
	*(str1+i) = '\0';
}

