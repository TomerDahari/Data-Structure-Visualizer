#include <stdio.h>
#include <stdlib.h>
#include "heap.h"

Heap* createHeap(int capacity) {
    Heap* heap = (Heap*)malloc(sizeof(Heap));
    heap->data = (int*)malloc(capacity * sizeof(int));
    heap->size = 0;
    heap->capacity = capacity;
    return heap;
}

void insertHeap(Heap* heap, int data) {
    if (heap->size >= heap->capacity) {
        printf("Heap is full\n");
        return;
    }
    int i = heap->size++;
    while (i && data < heap->data[(i - 1) / 2]) {
        heap->data[i] = heap->data[(i - 1) / 2];
        i = (i - 1) / 2;
    }
    heap->data[i] = data;
}

void printHeap(Heap* heap) {
    for (int i = 0; i < heap->size; i++) {
        printf("%d ", heap->data[i]);
    }
    printf("\n");
}
