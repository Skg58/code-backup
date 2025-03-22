#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

void transverse(struct node *temp) {
    int length = 0;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void length(struct node *temp) {
    int length = 0;
    while (temp != NULL) {
        length++;
        temp = temp->next;
    }
    printf("The length of dll is %d\n", length);
}

// insertion
// Case 1
struct node *insertatbeg(struct node *head, int data) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->prev = NULL;
    newnode->next = NULL;
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
    return head;
}

// Case 2
struct node *insertatindex(struct node *head, int position, int data) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->prev = NULL;
    newnode->next = NULL;
    newnode->data=data;
    int i = 1;
    struct node *temp = head;
    while (i < position - 1) {
        temp = temp->next;
        i++;
    }
    newnode->next = temp->next;
    newnode->next->prev = newnode;
    temp->next = newnode;
    newnode->prev = temp;

    return head;
}

// Case 3
struct node *insertatend(struct node *temp, int data) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->prev = NULL;
    newnode->next = NULL;
    newnode->prev = temp;
    temp->next = newnode;
    temp = newnode;
    return temp;
}

int main() {
    struct node *head = NULL;
    int input = 1;
    head = 0;
    struct node *temp;
    while (input) {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data of new node\n");
        scanf("%d", &newnode->data);
        newnode->prev = NULL;
        newnode->next = NULL;
        if (head == 0) {
            head = temp = newnode;
        } else {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
        printf("Do you want to insert a new node??\n");
        scanf("%d", &input);
    }
    transverse(head);
    length(head);

    // head= insertatbeg(head,10);
    head= insertatindex(head,3,78);
    transverse(head);


    return 0;
}