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
    struct Node *third = malloc(sizeof(struct Node));
    struct Node *fourth = malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = NULL;

    int position = 3;   // Delete 3rd node

    struct Node *temp = head;

    for (int i = 1; i < position - 1; i++) {
        temp = temp->next;
    }

    struct Node *toDelete = temp->next;
    temp->next = toDelete->next;
    free(toDelete);

    printf("After deletion from kth position: ");
    display(head);

    return 0;
}
