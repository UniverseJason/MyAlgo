#include <stdio.h>
#include <stdlib.h>
#include "linked-list.h"

node *newNode(int data)
{
    node *newNode = (node*) malloc (sizeof(node));
    if(!newNode)
    {
        fprintf(stderr,"newNode cannot allocate memory\n");
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int isEmpty(node *head)
{
    return (head == NULL) ? 1 : 0;
}

int getSize(node *head)
{
    int size = 0;
    node *temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
        size++;
    }

    return size;
}

// get node at the index
node *getNodeAt(node *head, int index)
{
    int i = 0;
    node *temp = head;

    for(i=0; i<index; i++)
    {
        temp = temp->next;
    }

    return temp;
}

// get node by the data
node *getNodeData(node *head, int data)
{
    int i = 0;
    node *temp = head;

    while(temp->next != NULL)
    {
        if(temp->data == data)
        {
            return temp;
        }
        temp = temp->next;
    }

    printf("Node not found\n");
    return NULL;
}

// push a node to the front of the list
void push_front(node **list, node *newNode)
{
    
}

// push a node the the end of the list
void push_end(node **list, node *newNode);

// pop a node from the front of the list
node *pop_front(node **list);

// pop a node from the end of the list
node *pop_end(node **list);

// get head node
node *getHead(node **list);

// get tail node
node *getTail(node **list);

// insert the node to the list
void insertNode(node **list, node *node);

// remove the node from the list by index
void removeNode_index(node **list, int index);

// remove the node from list by data
void removeNode_data(node **list, int data);

// reverse the linked list
void reverse(node **list);