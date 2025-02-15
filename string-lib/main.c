#include<stdio.h>
#include<stdlib.h>
#include "my_string_lib.h"

int main(void){

	printf("*********************************\n");
	printf("\t\t\032[0;32m string library function \t\t\n");
	printf("*********************************\n");

	printf("1. my_strlen()\n");
	printf("2. my_strcpy()\n");
	printf("3. my_strncpy()\n");
	printf("4. my_strcat()\n");
	printf("5. my_strncat()\n");
	printf("6. my_strcmp()\n");
	printf("7. my_strncmp()\n");
	printf("8. my_strchr()\n");
	printf("9. my_strrchr()\n");
	printf("10. my_strstr()\n");
	printf("11. my_strspan()\n");
	printf("12. my_strcspn()\n");
	printf("13. my_strrev)\n");
	printf("14. my_strupper()\n");
	printf("15. my_strlower()\n");
	printf("16. my_strtrim()\n");
	printf("17. my_strsplit()\n");
	printf("\n");
	int length, n,op;
	char s[50], s1[50];
	char d[51];

	while(1){
		printf("enter choice: ");
		scanf("%d", &op);
		switch(op){

			/*** my_strlen ***/
			case 1:	printf("Enter string: ");
				scanf("%s", s);
				length = my_strlen(s);
				printf("\033[0;32mLength of string = %d\n", length);
				break;

			/*** my_strcpy ***/
			case 2: printf("enter string: ");
				scanf("%s", s);
				my_strcpy(d,s);
				printf("\033[0;32m string copied \n");
				break;

			/*** my_strncpy() ***/
			case 3: printf("enter string: ");
				scanf("%s", s);
				printf("enter number of character want to copy(0-50): ");
			      	scanf("%d", &n);
				my_strncpy(d, s, n);
				printf("\033[0;32m %d character copied \n", n);

				break;
			/*** my_strcat() ***/
			case 4: printf("enter string 1: ");
				scanf("%s", s); 
				printf("enter string 2: ");
				scanf("%s", d);

				my_strcat(d,s);
				printf("\033[0;32mstring concatenated\n");
				printf("\033[0;32m %s\n",s);

				break;

			/*** my_strncat() ***/
			case 5:	printf("enter string 1: ");
				scanf("%s", s);
			        printf("enter string 2: ");
				scanf("%s", d);
				printf("enter how many character want to cancatenate: ");
				scanf("%d", &n);

				my_strncat(d, s, n);
				printf("\033[0;32m %d character concatenated\n", n);
				printf("\033[0;32m %s\n",s);
				
				break;

			/*** my_strcmp() ***/
			case 6:
			/*** my_strncmp() ***/
			case 7:
			/*** my_strncpy() ***/
			case 8:
			/*** my_strncpy() ***/
			case 9:
			/*** my_strncpy() ***/
			case 10:
			/*** my_strncpy() ***/
			case 11:
			/*** my_strncpy() ***/
			case 12:
			/*** my_strncpy() ***/
			case 13:
			/*** my_strncpy() ***/
			case 14:
			/*** my_strncpy() ***/
			case 15:
			/*** my_strncpy() ***/
			case 16:
			/*** my_strncpy() ***/
			case 17:
			case 18: exit(0);
			default: 
				 printf("\033[0;31mWrong choice...\n");

		}
	}



	return 0;
}
