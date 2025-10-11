#include"stdio.h"
#include"stdlib.h"
typedef struct Node {
    int data;
    struct Node* next;
} Node;
void insert(int index, int value, Node** head) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    Node* temp = *head;
    newNode->data = value;
    newNode->next = NULL;
    int counter = 0;
    if (index == 0) {
        *head = newNode;
        if (temp->next == NULL) {
            newNode->next = NULL;
        }
        else {
            newNode->next = temp->next->next;
        }
    }
    else {
        while (counter < index - 1) {
            temp = temp->next;
            counter++;
        }
        temp->next = newNode;

        if (temp->next == NULL) {
            newNode->next = NULL;
        }
        else {
            newNode->next = temp->next->next;
        }
    }
}
int main() {
    Node* head = (Node*)malloc(sizeof(Node));
    Node* traverse = head;
    int x;
    for (int i = 0;i < 5;i++) {
        scanf("%d", &x);
        insert(i, x, &head);
    }
    traverse = head;

    for (int i = 0;i < 5;i++) {
        printf("%d ", traverse->data);
        traverse = traverse->next;
    }
    return 0;
}