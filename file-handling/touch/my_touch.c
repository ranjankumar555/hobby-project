#include<stdio.h>
int main(int argc, char** argv){
	if(argc != 2){
		printf("USAGE: ./a.out file\n");
		return 0;
	}
	FILE* fp = fopen(argv[1], "w");
	
	return 0;
}
