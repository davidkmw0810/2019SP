#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "files.h"
// max length of id and pw is 15
#define max_len 15

char* login(char *str[]){
    if(strstr(str[1], "guest") != NULL){
	    return "guest";
	}

	FILE *fp = fopen("./user.txt", "r");

    char buffer[max_len*2 + 3]; // read line in user.txt
	struct User *user = malloc(sizeof(struct User));

	while(fgets(buffer, 35, fp) != NULL){ // read line on user.txt
	    if(strstr(buffer, str[1]) != NULL){ // check id in user.txt
		    strcpy(user -> id, strtok(buffer, " \n"));
			strcpy(user -> pw, strtok(NULL, " \n"));
            // when id and pw correct, return id, pw
			if(strcmp(user -> id, str[1]) == 0 && strcmp(user -> pw, str[2]) == 0){
			    printf("change user %s\n", user -> id);
				fclose(fp);
			    return user -> id;
			}

		}
	}

	// when id and pw uncorrect, return guest's id, pw
	printf("id and pw is not correct!!\n");
	fclose(fp);
}

