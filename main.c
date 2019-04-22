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

		if (argv[0] == "exit"){
		    return 0;
		} else if(argv[0] == "login"){
		    login(argv);
		} else if(argv[0] == "makec"){
		    makec(argv);
		} else if(argv[0] == "socketc"){
		    socketc(argv);
		} else {
		    function(argv);
		}



    }
    return 0;
}
