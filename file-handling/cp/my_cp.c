#include<stdio.h>
int main(int argc, char** argv){
	if(argc<3){
		printf("USAGE: my_cp srcfile destfile1 ... \n");
		return 1;
	}
	char ch;
	FILE* src, *dest;
	src = fopen(argv[1], "r");
	if(src == NULL){
		printf("Error in opening file...\n");
		return 1;
	}

	for(int i=2; i<argc; i++){
		dest = fopen(argv[i], "w");
		while((ch = fgetc(src))!= EOF){
			fputc(ch, dest);
		}
		fclose(dest);
		rewind(src);
	}

	fclose(src);
	return 0;
}
