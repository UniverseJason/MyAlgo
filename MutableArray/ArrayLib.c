#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "ArrayLib.h"

int i = 0;

// this will create a new vector with the given capacity
Vector* newVector(int capacity)
{
    Vector* v = (Vector*)malloc(sizeof(Vector));
    v->data = (int*)malloc(sizeof(int) * capacity);
    v->size = 0;
    v->capacity = capacity;
    return v;
}

// return the size of the vector
int size(Vector *v)
{
    return v->size;
}

// return the capacity of the vector
int capacity(Vector *v)
{
    return v->capacity;
}

// check if the vector is empty
int isEmpty(Vector *v)
{
    if(v->size == 0)
        return true;
    return false;
}

// search data in the vector by index
int getData(Vector *v, int index)
{
    if(index < 0 || index > v->size)
        return -1;
    return v->data[index];
}

// push data to the end of the vector
void push(Vector *v, int data)
{
    if(v->size == v->capacity) resize(v, v->capacity * 2);
    v->data[v->size] = data;
    v->size++;
}

// insert data to the given index
void insert(Vector *v, int index, int data)
{
    if(index < 0 || index > v->size) return;
    if(v->size == v->capacity) resize(v, v->capacity * 2);
    
    // move the data after the index to the right
    for(i = v->size; i > index; i--)
        v->data[i] = v->data[i - 1];

    v->data[index] = data;
    v->size++;
}

// add data to the head of the vector
void insertHead(Vector *v, int data)
{
    if(v->size == v->capacity) resize(v, v->capacity * 2);
    for(i = v->size; i > 0; i--)
        v->data[i] = v->data[i - 1];
    
    v->data[0] = data;
    v->size++;
}

// remove data from the end
int pop(Vector *v)
{
    if(v->size == 0) return -1;
    int data = v->data[v->size - 1];
    v->size--;
    return data;
}

// remove data from the given index
int removeAt(Vector *v, int index)
{
    if(index < 0 || index > v->size) return -1;
    int data = v->data[index];
    for(i = index; i < v->size - 1; i++)
        v->data[i] = v->data[i + 1];
    v->size--;
    return data;
}

// search data in the vector
int search(Vector *v, int data)
{
    for(i = 0; i < v->size; i++)
        if(v->data[i] == data) return i;
    return -1;
}

// resize the vector
void resize(Vector *v, int newCapacity)
{
    if(newCapacity < v->size)
    {
        printf("Can not resize to a smaller capacity\n");
        return;
    }
    
    int* newData = (int*)malloc(sizeof(int) * newCapacity);
    for(i = 0; i < v->size; i++)
        newData[i] = v->data[i];
    free(v->data);
    v->data = newData;
    v->capacity = newCapacity;
}

// print the vector
void printVector(Vector *v)
{
    printf("Array size %d and capacity %d\n", size(v), capacity(v));
    for(i = 0; i < v->size; i++)
        printf("%d ", v->data[i]);
    printf("\n");
}

void freeVector(Vector *v)
{
    free(v->data);
    free(v);
}
