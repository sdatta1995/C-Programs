#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
	int i;
	for(i=1; i<argc; i++) {
		printf("%s\n", argv[i]);
	}
	return 0;
}
