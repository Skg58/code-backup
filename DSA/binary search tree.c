#include <malloc.h>
#include <stdio.h>
#include<stdbool.h>
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
void inOrder(struct node *root) {
    if (root != NULL) {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}
struct node *search(struct node *root, int key) {
    while (root != NULL && root->data != key) {
        root = (root->data > key) ? root->left : root->right;
    }
    return root;
}
int bst(struct node *root, int min, int max) {
    if (root != NULL) {
        if (root->data <= min || root->data >= max) {
            return 0;
        } else {
            return bst(root->left, min, root->data) &&
                   bst(root->right, root->data, max);
        }

    } else {
        return 1;
    }
}

struct node *insert(struct node *root, int key) {
    if (root == NULL) {
        return createNode(key);
    }
    struct node *temp = root;

    while (true) {
        if (temp->data < key) {
            if (temp->right != NULL) {
                temp = temp->right;
            } else {
                temp->right = createNode(key);
                break;
            }

        } else {
            if (temp->left != NULL) {
                temp = temp->left;
            } else {
                temp->left = createNode(key);
                break;
            }
        }
    }
    return root;
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

    struct node *n = search(p, 1);
    if (n != NULL) {
        printf("Found: %d\n", n->data);
    } else {
        printf("Element not found\n");
    }
    if (bst(p, INT_MIN, INT_MAX)) {
        printf("This is a bst\n");
    } else {
        printf("This is not a bst\n");
    }

    p=insert(p,0);
    p=insert(p,7);
    inOrder(p);

    return 0;
}