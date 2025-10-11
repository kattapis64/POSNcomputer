#include<stdio.h>
#include<stdlib.h>
typedef struct Node {
    int data;
    struct Node* next;
}Node;
void insert(int index, int data, Node** head) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    Node* temp = *head;
    newNode->data = data;


    if (index == 0) {

        if (temp->next == NULL) {
            newNode->next = NULL;
        }
        else {
            newNode->next = temp->next;
        }
        temp = newNode;

    }
    else {
        temp = head;
        int counter = 0;
        while (counter < index - 1) {
            temp = temp->next;
        }
        if (temp->next == NULL) {
            temp->next = newNode;
            newNode->next = NULL;
        }
        else {
            newNode->next = temp->next->next;
            temp->next = newNode;
        }
    }
}
void delete_node(Node** head, int index) {
    Node* temp = *head;
    if (index == 0) {
        head = temp->next;
        free(temp);
    }
    else {
        temp = head;
        int counter = 0;

        while (counter < index - 1) {
            temp = temp->next;
            if (temp->next == NULL) {
                while (counter < index - 2) {
                    temp = temp->next;
                }

            }
            else {
            }
        }
    }
}
int main() {
    Node* head = (Node*)malloc(sizeof(Node));
    return 0;
}