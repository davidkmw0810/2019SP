// Main Controller

# include <stdio.h>
# include <string.h>
# include "files.h"
# define max_len 100

int main(int argc, char *argv[]){
    printf("You can use linux function, and login, makec, socketc command\n");
    while(1){

	    printf(">>");

        // get command from user
		char str[max_len];
		memset(str, 0, max_len);
		fgets(str, max_len, stdin);
		
        // Check anything write
		if(str == 0){
            continue;
        }

		if (strcmp(str, "exit\n") == 0){ // end myshell
		    return 0;
		} else if(strcmp(str, "login\n") == 0){ // user login
		    login();
		} else if(strcmp(str, "makec\n") == 0){ // make c basic
		    makec();
		} else if(strcmp(str, "socketc\n") == 0){ // make socket basic
		    socketc();
		} else {
		    function(str);
		}

    }
    return 0;
}
