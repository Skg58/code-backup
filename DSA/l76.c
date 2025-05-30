#include <malloc.h>
#include <stdio.h>
#include <stdbool.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data) {
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
void insert(struct node *root, int key) {
    struct node *prev = NULL;
    while (root != NULL) {
        prev = root;
        if (root->data == key) {
            return;
        } else if (key < root->data) {
            root = root->left;
        } else {
            root = root->right;
        }
    }
    struct node *new = createNode(key);

    if (new->data < key) {
        prev->right = new;
    } else {
        prev->right = new;
    }
}



int main() {
    // Constructing the root node - Using Function (Recommended)
    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);
    // Finally The tree looks like this:
    //      5
    //     / \
    //    3   6
    //   / \
    //  1   4

    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    insert(p, 8);
    insert(p, 2);
    printf("%d\n", p->right->right->data);
    printf("%d\n", p->left->left->right->data);
    return 0;
}