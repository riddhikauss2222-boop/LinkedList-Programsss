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
    struct Node *temp;

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = NULL;

    temp = head;
    head = head->next;
    free(temp);

    printf("After deletion from beginning: ");
    display(head);

    return 0;
}
