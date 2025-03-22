#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* prev;
    struct node* next;
};

int main() {
    struct node* head = NULL;
    int input = 1;
    head = 0;
    struct node* temp;
    while (input) {
        struct node* newnode = (struct node*)malloc(sizeof(struct node));
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
    temp = head;
    int length = 0;
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
    return 0;
}