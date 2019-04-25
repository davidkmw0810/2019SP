#include <stdio.h>
#include <string.h>

void socketc(char *str[]){
	// input has relative path
	char fname[20];
	strcpy(fname, str[1]);
	strcat(fname, ".c");

	FILE *copen = fopen("./basicsocket.txt", "r");
	FILE *cmake = fopen(fname, "w");
    
	char n;
	char buffer[1];
	memset(buffer, 0, 1);
    n = fread(buffer, sizeof(char), 1, copen);

    while(n > 0){
	    fwrite(buffer, sizeof(char), 1, cmake);
	    memset(buffer, 0, 1);
        n = fread(buffer, sizeof(char), 1, copen);
	}

	fclose(copen);
	fclose(cmake);
}
