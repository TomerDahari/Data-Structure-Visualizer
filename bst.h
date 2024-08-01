#ifndef BST_H
#define BST_H

typedef struct BSTNode {
    int data;
    struct BSTNode* left;
    struct BSTNode* right;
} BSTNode;

BSTNode* createBST();
void addBSTNode(BSTNode** root, int data);
void printBST(BSTNode* root);

#endif
