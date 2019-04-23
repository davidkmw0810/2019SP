# include <stdio.h>
# include <string.h>

struct User;
void function();
struct User login();
struct User guest();
void makec();
void socketc();

struct User {
    char id[17];
	char pw[17];
};

struct User guest(){
    struct User g;
    strcpy(g.id, "guest");
    strcpy(g.pw, "");
    
    return g;
}   


