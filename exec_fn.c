#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc, char *argv[]) {
	int i;
	char *params[10];
	for(i=1; i<argc; i++){
		params[i] = argv[i];
		printf("params: %s\n", params);
	}
	printf("params: %s", params);
	char *args[]={"./print_arg", params};
	execv(args[0], args);
	return 0;
}
