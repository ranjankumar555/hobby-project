char* my_strcpy(char* dest, const char* src){
  while(*src){
    *dest = *src;
    dest++;
    src++;
  }
  *dest = '/0';
  return dest;
}
/* end of my_strcpy() */

char* my_strncpy(char* dest, const char* src, unsigned int n){
  int i=0;
  while(i<n && src){
    *dest++ = *src++;
    i++;
  }
  return dest;
}
/* end of my_strncpy() */
