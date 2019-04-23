// Main Controller

# include <stdio.h>
# include "function.c"
# include "login.c"
# include "makec.c"
# include "socketc.c"
# define max_len 100

int main(int argc, char *argv[]){
    printf("You can use linux function, and login, makec, socketc command\n");
    while(1){

	    printf(">>");

        // get command from user
		char str[max_len];
		fgets(str, max_len, stdin);
		
        // Check anything write
		if(str == 0){
            continue;
        }

		if (strcmp(str, "exit") == 0){
		    return 0;
		} else if(strcmp(str, "login") == 0){
		    login();
		} else if(strcmp(str, "makec") == 0){
		    makec();
		} else if(strcmp(str, "socketc") == 0){
		    socketc();
		} else {
		    function(str);
		}

    }
    return 0;
}
