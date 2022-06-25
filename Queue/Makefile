CC = gcc
CFLAGS = -Wall

all: queue

clean:
	rm -f queue *.o

Queue.o: Queue.c Queue.h
	$(CC) $(CFLAGS) -c Queue.c

QueueTest.o: QueueTest.c Queue.h
	$(CC) $(CFLAGS) -c QueueTest.c

queue: QueueTest.o Queue.o
	$(CC) $(CFLAGS) -o queue QueueTest.o Queue.o