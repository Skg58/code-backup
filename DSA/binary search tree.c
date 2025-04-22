#include <malloc.h>
#include <stdbool.h>
#include <stdio.h>
struct node *helper(struct node *root);
struct node *lastrightnode(struct node *root);
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

struct node *insertion(struct node *root, int key) {
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

struct node *deletion(struct node *root, int key) {
    if (root == NULL) {
        return NULL;
    }
    if (root->data == key) {
        return helper(root);
    }
    struct node *temp = root;
    while (root != NULL) {
        if (root->data > key) {
            if (root->left != NULL && root->left->data == key) {
                root->left = helper(root->left);
                break;
            } else {
                root = root->left;
            }

        } else {
            if (root->right != NULL && root->right->data == key) {
                root->right = helper(root->right);
                break;
            } else {
                root = root->right;
            }
        }
    }
    return temp; 
}
struct node *helper(struct node *root) {
    if (root->left == NULL) {
        return root->right;
    } else if (root->right == NULL) {
        return root->left;
    }
    struct node *rootright = root->right;
    struct node *lastright = lastrightnode(root->left);
    lastright->right = rootright;
    return root->left;
}

struct node *lastrightnode(struct node *root) {
    while (root->right != NULL) {
        root = root->right;
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

    p = insertion(p, 0);
    p = insertion(p, 7);
    inOrder(p);
    printf("\n");
    // p = deletion(p, 3);
    p = deletion(p, 7);
    inOrder(p);

    return 0;
}
