#ifndef MY_STRING_LIB_H
#define MY_STRING_LIB_H

unsigned int my_strlen(const char* str);

void my_strcpy(char* dest, const char* src);
void my_strncpy(char*dest, const char* src, unsigned int n);

void my_strcat(char* str1, const char* str2);
void my_strncat(char* str1, const char* str2, unsigned int n);

int my_strcmp(const char* str1, const char* str2);
int my_strncmp(const char* str1, const char* str2, unsigned int n);

const char* my_strchr(const char* str, char ch);
const char* my_strrchr(const char* str, char ch)

char* my_strupper(char* str);
char* my_strlower(char* str);

char* my_strrev(char* str);
void my_strrev1(char* p, int len);
void my_strrev2(char* p, char* q);

char* my_strstr(char* main, char* sub);
#endif
