#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

BSTNode* createBST() {
    return NULL;
}

void addBSTNode(BSTNode** root, int data) {
    if (*root == NULL) {
        *root = (BSTNode*)malloc(sizeof(BSTNode));
        (*root)->data = data;
        (*root)->left = NULL;
        (*root)->right = NULL;
    } else if (data < (*root)->data) {
        addBSTNode(&(*root)->left, data);
    } else {
        addBSTNode(&(*root)->right, data);
    }
}

void printBST(BSTNode* root) {
    if (root != NULL) {
        printBST(root->left);
        printf("%d ", root->data);
        printBST(root->right);
    }
}
