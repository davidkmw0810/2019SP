// Main Controller

# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include "files.h"
# define max_len 100

int main(int argc, char *argv[]){
    printf("You can use linux function, and login, makec, socketc command\n");
	
    while(1){
        char pwd[100];
		getcwd(pwd, 100);
	    printf("%s>>", pwd);

        // get command from user
		char input[max_len];
		memset(input, 0, max_len);
		fgets(input, max_len, stdin);

        // Check anything write
		if(strcmp(input, "\n") == 0){
            continue;
        }

        // divide input
		char *str[10];
		int k = 0;
		memset(str, 0, 10);
        str[k] = strtok(input, " \n");
		while(str[k] != NULL){
		    k++;
			str[k] = strtok(NULL, " \n");
		}
		if (strstr(str[0], "exit") != NULL){ // end myshell
		    printf("END!!!\n");
		    return 0;
		} else if(strstr(str[0], "login") != NULL){ // user login
		    login(str);
		} else if(strstr(str[0], "makec") != NULL){ // make c basic
		    makec(str);
		} else if(strstr(str[0], "socketc") != NULL){ // make socket basic
		    socketc(str);
		} else if(strstr(str[0], "cd") != NULL){ // cd can't working in execvp
		    cd(str[1]);
		} else {
		    function(str, k);
		}

    }
    return 0;
}
