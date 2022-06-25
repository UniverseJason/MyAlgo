#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

// create new Queue
Queue_LL *newQ_LL()
{
    Queue_LL *newQ = (Queue_LL*)malloc(sizeof(Queue_LL));
    if (!newQ)
    {
        fprintf(stderr, "ERROR: malloc failed\n");
        return NULL;
    }
    newQ->head = NULL;
    newQ->tail = NULL;
    return newQ;
}

// enQueue will add the data in the end of the Queue
void enQueue_LL(Queue_LL *queue, Node *data)
{
    if(queue->head == NULL)
    {
        queue->head = data;
        queue->tail = data;
    }
    else
    {
        queue->tail->next = data;
        queue->tail = data;
    }
    data->next = NULL;
}

// deQueue will returns value and removes least recently added element
Node *deQueue_LL(Queue_LL *queue)
{
    Node *temp = queue->head;

    if(queue->head == NULL)
    {
        exit(EXIT_FAILURE);
    }
    
    if(queue->head == queue->tail)
    {
        queue->head = NULL;
        queue->tail = NULL;
        return temp;
    }

    queue->head = queue->head->next;

    return temp;
}

// check if the data is empty
int emptyQ(Queue_LL *queue) { if(queue->head == NULL) return 1; else return 0; }

// print the Queue
void printQ(Queue_LL *queue)
{
    Node *temp = queue->head;
    while(temp)
    {
        printf("%d ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}