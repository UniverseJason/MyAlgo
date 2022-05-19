#ifndef linked_list_h
#define linked_list_h

typedef struct node {
    int data;
    node *next;
} node;

node *newNode(int data);
int isEmpty(node *head);
int getSize(node *head);

// get node at the index from the head
node *getNodeAt(node *head, int index);

// get node by the data
node *getNodeData(node *head, int data);

// push a node to the front of the list
void push_front(node **list, node *newNode);

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





#endif