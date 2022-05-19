CC = gcc
CFLAGS = -Wall -g

all: linkedlist

clean:
	rm -f *.o linkedlist

linked-list.o: linked-list.c linked-list.h
	$(CC) $(CFLAGS) -c linked-list.c

linked-list-test.o: linked-list-test.c linked-list.h
	$(CC) $(CFLAGS) -c linked-list-test.c

linkedlist: linked-list.o linked-list-test.o
	$(CC) $(CFLAGS) -o linkedlist linked-list.o linked-list-test.o