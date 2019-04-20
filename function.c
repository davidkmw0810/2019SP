// for normal function

#include <stdio.h>

int function(char *str){
    // Array for function's string. Buffer have function's name and method. Example) "ls -l"
    char *buffer[20];

    // Make array for execvp
    int k = 0;
    buffer[k] = strtok(str, " \n");
    while(buffer[k] != NULL){
        k ++;
        buffer[k] = strtok(str, " \n");
    }

    // Make background method
    int background = 0;
    if (buffer[k] == "&"){
        background = 1;
        buffer[k] = "\0";
    }

    // Make child_process for background
    if (background == 1){
        
    }
}
