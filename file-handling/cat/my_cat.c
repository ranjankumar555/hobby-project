#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv){
	if(argc != 2){
		printf("USAGE: cat <fileName>\n");
		return 1;
	}

	FILE* fp = fopen(argv[1], "r");
	
	// check if file is present or not
	if(fp==NULL){
		printf("File not Found...\n");
		return 1;
	}


	/* Approach 1: Reading char by char data using fgetc. */
	char ch;
	while((ch=fgetc(fp)) != EOF){
		printf("%c",ch);
	}

	/* Approach 2: Reading line by line data using fgets.
	char *s = (char*)malloc(sizeof(char)*200);
	while(fgets(s,200, fp))
	printf("%s", s);
	*/

	fclose(fp);
	return 0;
}
