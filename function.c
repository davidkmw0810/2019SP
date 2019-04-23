// for normal function

#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <wait.h>
#include <unistd.h>

void function(char *buffer[], int len){
    // Make background method
    int background = 0;
    if (strcmp(buffer[len - 1],"&") == 0){
        background = 1;
        buffer[len - 1] = NULL;
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
