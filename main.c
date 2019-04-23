// Main Controller

# include <stdio.h>
# include <string.h>
# include "files.h"
# define max_len 100

int main(int argc, char *argv[]){
    printf("You can use linux function, and login, makec, socketc command\n");
	
	struct User user = login();

    while(1){

	    printf("%s>>", user.id);

        // get command from user
		char input[max_len];
		memset(input, 0, max_len);
		fgets(input, max_len, stdin);
	
        // Check anything write
		if(input == 0){
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

		if (strcmp(str[0], "exit\n") == 0){ // end myshell
		    return 0;
		} else if(strchr(str[0], "login") != NULL){ // user login
		    user = login(str);
		} else if(strcmp(str[0], "makec\n") == 0){ // make c basic
		    makec();
		} else if(strcmp(str[0], "socketc\n") == 0){ // make socket basic
		    socketc();
		} else {
		    function(str, k);
		}

    }
    return 0;
}
