#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node* next;
};

int main() {
    int n;
    struct Node* head = NULL;
    struct Node* moving = head;
    head = malloc(sizeof(struct Node*));
    scanf("%d", &n);
    int x;
    for (int i = 0;i < n;i++) {
        moving = malloc(sizeof(struct Node));
        moving->next = NULL;
        scanf("%d", &moving->data);
        moving = moving->next;
    }
    moving = head;
    for (int i = 0;i < n;i++) {
        printf("%d ", moving->data);
        moving = moving->next;
    }
    return 0;
}