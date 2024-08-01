#include <stdio.h>
#include "linkedlist.h"
#include "bst.h"
#include "graph.h"
#include "heap.h"

void handleLinkedList() {
    Node* head = createLinkedList();
    int data;
    char choice;
    do {
        printf("Enter data to add to the linked list: ");
        scanf("%d", &data);
        addNode(&head, data);
        printf("Linked list after addition: ");
        printLinkedList(head);
        printf("Do you want to add another node? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
}

void handleBST() {
    BSTNode* root = createBST();
    int data;
    char choice;
    do {
        printf("Enter data to add to the BST: ");
        scanf("%d", &data);
        addBSTNode(&root, data);
        printf("BST after addition: ");
        printBST(root);
        printf("\nDo you want to add another node? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
}

void handleGraph() {
    int vertices, edges, src, dest;
    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    Graph* graph = createGraph(vertices);

    int maxEdges = vertices * (vertices - 1) / 2; // עבור גרף לא מכוון
    printf("Enter the number of edges (max %d): ", maxEdges);
    scanf("%d", &edges);

    if (edges > maxEdges) {
        printf("Error: Too many edges for the number of vertices.\n");
        return;
    }

    for (int i = 0; i < edges; i++) {
        printf("Enter edge (source and destination, indices start from 0): ");
        scanf("%d %d", &src, &dest);

        if (src >= vertices || dest >= vertices || src < 0 || dest < 0) {
            printf("Error: Invalid edge (%d, %d). Please enter valid vertices.\n", src, dest);
            i--; // לא להחשיב קלט לא חוקי
        } else {
            addEdge(graph, src, dest);
        }
    }
    printf("Graph adjacency matrix:\n");
    printGraph(graph);
}

void handleHeap() {
    int capacity, data;
    printf("Enter the capacity of the heap: ");
    scanf("%d", &capacity);

    Heap* heap = createHeap(capacity);

    char choice;
    do {
        printf("Enter data to insert into the heap: ");
        scanf("%d", &data);
        insertHeap(heap, data);
        printf("Heap after insertion: ");
        printHeap(heap);
        printf("Do you want to insert another element? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
}

int main() {
    int choice;
    do {
        printf("Choose a data structure:\n");
        printf("1. Linked List\n");
        printf("2. Binary Search Tree\n");
        printf("3. Graph\n");
        printf("4. Heap\n");
        printf("5. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                handleLinkedList();
                break;
            case 2:
                handleBST();
                break;
            case 3:
                handleGraph();
                break;
            case 4:
                handleHeap();
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
