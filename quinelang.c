#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {
	if(argc != 2) {
		fprintf(stderr, "Usage: qlc filename.qlc\n");
		exit(1);
	}
	int c;
	FILE *file;
	file = fopen(argv[1], "r");
	if (file) {
	    while ((c = getc(file)) != EOF)
	        putchar(c);
	    printf("\n");
	    fclose(file);
	}
	return 0;
	}