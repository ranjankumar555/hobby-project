#include<stdio.h>
#include <sys/stat.h>
#include <sys/types.h>

int main(int argc, char** argv){
	if(argc<2){
		printf("USAGE: ./a.out file1 ...\n");
		return 1;
	}
	int r;
	for(int i = 1; i<argc; i++){
		r = mkdir(argv[i], 0777);
		if(r == -1){
			perror("mkdir");
			return 1;
		}
		printf("%s Directory created successfully\n", argv[i]);
	}

	return 0;
}
