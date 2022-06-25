#ifndef QUEUE_H
#define QUEUE_H

// Node to store the data
typedef struct Node {
    int value;
    struct Node *next;
} Node;

// struct for the linked list like Queue
typedef struct Queue_LL
{
    Node *head;
    Node *tail;
} Queue_LL;

// create new Queue
Queue_LL *newQ_LL();

// enQueue will add the data in the end of the Queue
void enQueue_LL(Queue_LL *queue, Node *data);

// deQueue will returns value and removes least recently added element
Node *deQueue_LL(Queue_LL *queue);

// check if the data is empty
int emptyQ(Queue_LL *queue);

// print the Queue
void printQ(Queue_LL *queue);

#endif