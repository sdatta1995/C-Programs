#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
#include<sys/wait.h>

int main(int argc, char *argv[]){
	int fd1,fd2,n,x, i;
	char buffer[80];
	char msg;
	char oneMore[40];
	printf("Enter the contents of the file: \n");
	fgets(oneMore, 40, stdin);
	printf("One More: %s", oneMore);
	n= fork();
	if(n==0){
		fd1= open("create.txt",O_RDWR|O_CREAT|O_EXCL,0777);
		write(fd1, oneMore, sizeof(oneMore));
		close(fd1);
		exit(0);
	}
	else{
		wait(NULL);
		fd2= open("create.txt",O_RDWR);
		read(fd2, buffer, sizeof(buffer));
		printf("the required ans is : %s",buffer);
		close(fd2);

	}
	return 0;
}

