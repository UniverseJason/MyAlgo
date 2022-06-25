#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

int main(int argc, char* argv[])
{
    Queue_LL *q = newQ_LL();
    Node* newNode1 = (Node*)malloc(sizeof(Node));
    Node* newNode2 = (Node*)malloc(sizeof(Node));
    Node* newNode3 = (Node*)malloc(sizeof(Node));
    Node* newNode4 = (Node*)malloc(sizeof(Node));
    newNode1->value = 1;
    newNode2->value = 2;
    newNode3->value = 3;
    newNode4->value = 4;

    enQueue_LL(q, newNode1);
    enQueue_LL(q, newNode2);
    enQueue_LL(q, newNode3);
    enQueue_LL(q, newNode4);

    deQueue_LL(q);
    deQueue_LL(q);
    deQueue_LL(q);
    deQueue_LL(q);
    deQueue_LL(q);
    
    printf("%d\n", emptyQ(q));
    printQ(q);
    return 0;
}