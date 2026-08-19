#include <stdio.h>

#define MAX 10

struct Node {
    int data;
    int next;
};

int main() {
    struct Node list[MAX];

    list[0].data = 10;
    list[0].next = 1;

    list[1].data = 20;
    list[1].next = 2;

    list[2].data = 30;
    list[2].next = -1;

    int index = 0;

    printf("Array Implementation of Linked List: ");

    while (index != -1) {
        printf("%d -> ", list[index].data);
        index = list[index].next;
    }

    printf("NULL\n");

    return 0;
}
