
char* my_strupper(char* str){
int i = 0;  
while(*(str+i)){

    // only alphabets and small letter will be transform to capital alphabet remaining as it is..
    if(*(str+i)>='A' && *(str+i)<='Z'){
          *(str+i) ^= 32;
    }
  i++;
  }
return str;
}
