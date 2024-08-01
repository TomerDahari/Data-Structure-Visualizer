#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createLinkedList();
void addNode(Node** head, int data);
void printLinkedList(Node* head);

#endif
