#include <stdio.h>
int my_strcmp(const char* str1, const char* str2){
  while(*str1){
    if(*str1 != *str2){
        return *str1 - *str2;
    }
    str1++;
    str2++;
  }
  return *str1 - *str2;
}

int my_strncmp(const char* str1, const char* str2, unsigned int n){
  unsigned int i=0;
  while(*str1 && i<n){
    if(*str1 != *str2){
        return *str1 - *str2;
    }
    str1++;
    str2++;
    i++;
  }
  return *str1 - *str2;
}


