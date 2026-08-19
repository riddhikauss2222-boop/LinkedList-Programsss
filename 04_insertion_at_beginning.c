#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void display(struct Node *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *head = malloc(sizeof(struct Node));
    struct Node *second = malloc(sizeof(struct Node));
    struct Node *newNode = malloc(sizeof(struct Node));

    head->data = 20;
    head->next = second;

    second->data = 30;
    second->next = NULL;

    newNode->data = 10;
    newNode->next = head;
    head = newNode;

    printf("After insertion at beginning: ");
    display(head);

    return 0;
}
