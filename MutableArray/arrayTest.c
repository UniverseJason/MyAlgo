#include <stdlib.h>
#include <stdio.h>
#include "ArrayLib.h"

int main()
{
    Vector* v = newVector(10);
    for(int i = 0; i < 10; i++)
        push(v, i);
    printVector(v);
    
    // empty?
    printf("isEmpty: %d\n", isEmpty(v));

    // get data
    printf("getData: %d\n", getData(v, 3));
    printf("getData: %d\n", getData(v, 6));

    // push 
    printf("\nPushing data to the end...\n");
    push(v, 10);
    printVector(v);

    // insert
    printf("\nInserting data to the given index...\n");
    insert(v, 6, 114514);
    printVector(v);

    // insert head
    printf("\nInserting data to the head...\n");
    insertHead(v, -114514);
    printVector(v);

    // pop
    printf("\nPopping data from the end...\n");
    printf("pop: %d\n", pop(v));
    printVector(v);

    // remove at
    printf("\nRemoving data from the given index...\n");
    printf("removeAt: %d\n", removeAt(v, 7));
    printf("removeAt: %d\n", removeAt(v, 0));
    printVector(v);

    // search
    printf("\nSearching data in the vector...\n");
    printf("search: %d\n", search(v, 114514));
    printf("search: %d\n", search(v, -114514));
    printf("search: %d\n", search(v, 2));

    // resize
    printf("\nResizing the vector...\n");
    resize(v, 15);
    printVector(v);

    push(v, 10);
    push(v, 11);
    push(v, 12);
    push(v, 13);
    push(v, 14);
    push(v, 15);
    push(v, 16);

    printVector(v);





    freeVector(v);
    return 0;
}