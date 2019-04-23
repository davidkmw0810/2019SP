CC = gcc
STRIP = strip

SRC1 = main
SRC2 = function
SRC3 = login
SRC4 = makec
SRC5 = socketc

myshell : $(SRC1).o $(SRC2).o $(SRC3).o $(SRC4).o $(SRC5).o
		$(CC) -o myshell $(SRC1).o $(SRC2).o $(SRC3).o $(SRC4).o $(SRC5).o
		$(STRIP) myshell

$(SRC1).o : $(SRC1).c
		$(CC) -c $(SRC1).c

$(SRC2).o : $(SRC2).c
		$(CC) -c $(SRC2).c

$(SRC3).o : $(SRC3).c
		$(CC) -c $(SRC3).c

$(SRC4).o : $(SRC4).c
		$(CC) -c $(SRC4).c

$(SRC5).o : $(SRC5).c
		$(CC) -c $(SRC5).c

clean :
		rm -f *.o myshell 

