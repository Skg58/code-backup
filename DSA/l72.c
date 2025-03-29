#include <malloc.h>
#include <stdio.h>
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

    int isBST(struct node *root) {
        static struct node *prev = NULL;
        if (root != NULL) {
            if (!isBST(root->left)) {
                return 0;
            }
            if (prev != NULL && root->data <= prev->data) {
                return 0;
            }
            prev = root;
            return isBST(root->right);
        }
            else {
                return 1;
            }
        
    }

    int bst(struct node*root,int min,int max){
    if (root!=NULL)
    {
        if (root->data <=min||root->data>=max)
        {
            return 0;
        }
        else{
            return bst(root->left,min,root->data)&&bst(root->right,root->data,max);
        }
        
    }
    else{
        return 1;
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

    inOrder(p);
    printf("\n");
    // printf("%d", isBST(p));
    if (bst(p,INT_MIN,INT_MAX)) {
        printf("This is a bst");
    } else {
        printf("This is not a bst");
    }
    return 0;
}