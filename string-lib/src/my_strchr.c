
#include<stdio.h>

// strchr check character from starting address of string 
const char* my_strchr(const char* str, char ch){
  while(*str){
      if(*str == ch) return str;
      str++;
  }
  // if character not found, return NULL
  return NULL;
} /* end of my_strchr */

// strchr check character from ending address of string
const char* my_strrchr(const char* str, char ch){
  //get length of string
  int len, i;
  
  for(len=0; *(str+len); len++); 
  
  for(i= len-1; i>=0; i--){
    if(str[i] == ch)
      return str+i;
  }
  // if character not found, return NULL
  return NULL;
} /* end of my_strrchr */



/*---- USAGE -----
int main(){
    char s[20] =  "Ranjan kumar";
    if(my_strrchr(s, 'k')){
        printf("Character present\n");
    }
    else{
        printf("Character not present\n");
    }
}
*/
