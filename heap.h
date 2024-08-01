#ifndef HEAP_H
#define HEAP_H

typedef struct Heap {
    int* data;
    int size;
    int capacity;
} Heap;

Heap* createHeap(int capacity);
void insertHeap(Heap* heap, int data);
void printHeap(Heap* heap);

#endif
