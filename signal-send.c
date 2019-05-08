#include<signal.c>
#include<stdlib.h>

int main(int argc, char argv[]){

	if (argc < 3){
		printf("사용법: ./signal-send [SIGNAL NUM] [프로세스 ID]\n");
	}
	else{
		kill(atoi(argv[2]),	argv[1]);
	}
	return(0);
}


/*signal-send.c*/
#include<stdio.h>
#include<signal.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	if (argc < 2){
		printf("사용법: ./signal-send [프로세스 ID]\n");
	}
	else{
		kill(atoi(argv[1]), SIGKILL);
	}
	return(0);
}
