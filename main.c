// Main Controller

# include<stdio.h>

int main(int argc, char *argv[]){
    printf("You can use linux function, and login, makec, socketc command\n");
    while(1){

	    printf(">>");
        // Check anything write
		if(argc == 0){
            continue;
        }

		switch (argv[0]){
            case "exit" : 
			    return 0;
			case "login" :
			    login(argv);
			case "makec" :
			    makec(argv);
			case "socketc" :
			    socketc(argv);
			default : // for normal function
			    function(argv);
		}

    }
    return 0;
}
