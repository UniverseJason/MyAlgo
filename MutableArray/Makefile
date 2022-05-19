CC = gcc
CFLAGS = -Wall

all: array

clean:
	rm -f array *.o

ArrayLib.o: ArrayLib.c ArrayLib.h
	$(CC) $(CFLAGS) -c ArrayLib.c

arrayTest.o: arrayTest.c ArrayLib.h
	$(CC) $(CFLAGS) -c arrayTest.c

array: arrayTest.o ArrayLib.o
	$(CC) $(CFLAGS) -o array arrayTest.o ArrayLib.o