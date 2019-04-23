// for normal function

#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <wait.h>
#include <unistd.h>

void function(char str[]){
    // Array for function's string. Buffer have function's name and method. Example) "ls -l"
    char *buffer[20];

    // Make array for execvp
    int k = 0;
    buffer[k] = strtok(str, " \n");
    while(buffer[k] != NULL){
        k ++;
        buffer[k] = strtok(NULL, " \n");
    }

    // Make background method
    int background = 0;
    if (buffer[k] == "&"){
        background = 1;
        buffer[k] = NULL;
    }

    // Make child_process for background
	pid_t pid = fork();;

    // makesure fork's job
    if(pid<0){
        printf("Fork error!\n");
    } else {
        int status;
        // Child process's job
        if(pid == 0){
            execvp(buffer[0], buffer);
        } else if(background){ // Parents process's job
            printf("Command is running on background\n");
        } else{
            waitpid(pid, &status, 0);
        }
    
    }
}
