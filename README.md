# Make My Own Shell

## Functions

### 1. Normaly linux's function
 Make normal functions in 'execvp'. But 'cd' command is not working in 'execvp'. So I use system call 'chdir' for making cd command  
### 2. Make basic '.C' file
 Make code for printing 'Hello World!'.

 Command is 'makec {filename}'
### 3. Make socket code on language C
 Make code for connecting socket.
 > It is project in our Network class. I copy that.
 
 Command is 'socketc {filename}'
### 4. Can change user's name
 When you run the shell, user is 'guest'. If you want to change user, do 'login {id} {pw}'.



## Makefile
You can run this shell on command 'myshell'.
Of course you have to 'make myshell'.
