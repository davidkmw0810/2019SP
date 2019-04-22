CC = gcc
STRIP = strip

SRC1 = main
SRC2 = function

myshell : $(SRC1).o $(SRC2).o
	$(CC) -o myshell $(SRC1).o $(SRC2).o
	$(STRIP) myshell

$(SRC1).o : $(SRC1).c
	$(CC) -c $(SRC1).c


$(SRC2).o : $(SRC2).c
	$(CC) -c $(SRC2).c

clean :
	rm -f *.o 
