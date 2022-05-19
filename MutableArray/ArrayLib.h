#ifndef ArrayLib_h
#define ArrayLib_h

typedef struct Vector
{
    // pointer to the data array
    int *data;

    // size of the vector
    int size;

    // capacity of the vector
    int capacity;
} Vector;

// this will create a new vector with the given capacity
Vector *newVector(int capacity);

// return the size of the vector
int size(Vector *v);

// return the capacity of the vector
int capacity(Vector *v);

// check if the vector is empty
int isEmpty(Vector *v);

// search data in the vector by index
int getData(Vector *v, int index);

// push data to the end of the vector
void push(Vector *v, int data);

// insert data to the given index
void insert(Vector *v, int index, int data);

// add data to the head of the vector
void insertHead(Vector *v, int data);

// remove data from the end
int pop(Vector *v);

// remove data from the given index
int removeAt(Vector *v, int index);

// search data in the vector
int search(Vector *v, int data);

// resize the vector
void resize(Vector *v, int newCapacity);

// print the vector
void printVector(Vector *v);

// free the vector
void freeVector(Vector *v);

#endif