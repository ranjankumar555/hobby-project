#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <errno.h>

int main(int argc, char** argv) {
	if(argc < 2) {
		fprintf(stderr, "USAGE: %s file1 ...\n", argv[0]);
		return 1;
	}

	for(int i = 1; i < argc; i++) {
		struct stat st;

		if(lstat(argv[i], &st) == -1) {
			perror(argv[i]);
			continue;
		}

		if(S_ISDIR(st.st_mode)) {
			// directory
			if(rmdir(argv[i]) == -1) {
				perror(argv[i]);
			}
		} else {
			// file or symlink
			if(unlink(argv[i]) == -1) {
				perror(argv[i]);
			}
		}
	}

	return 0;
}
