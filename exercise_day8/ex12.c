#include<stdio.h>
#include<stdlib.h>
typedef struct std_data {
    int id;
    char name[20];
    float gpa;
}std_data;
struct Node {
    std_data data;
    struct Node* next;
};
void insert(int index, std_data data, struct Node** head) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* traveller = *head;
    newNode->data = data;
    newNode->next = NULL;

    if (index == 0) {
        *head = newNode;

        if (traveller->next != NULL) {
            newNode->next = traveller->next->next;
        }
        else {
            newNode->next = NULL;
        }
    }
    else {
        int counter = 0;
        while (counter < index - 1) {
            traveller = traveller->next;
            counter++;
        }
        if (traveller->next == NULL) {
            traveller->next = newNode;
        }
        else {
            traveller->next = newNode;
            newNode->next = traveller->next->next;
        }
    }
}
void deleted(int index, struct Node** head) {
    struct Node* temp = *head;
    if (index == 0) {
        *head = temp->next;
        free(temp);
    }
    else {
        int counter = 0;
        while (counter < index - 1) {
            temp = temp->next;
        }
        if (temp->next == NULL) {
            temp->next = NULL;
        }
        else {
            temp->next = temp->next->next;
        }
    }
}
int main() {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->next = NULL;
    struct Node* traverse = head;
    int choice;
    int end = -1;
    int id;
    char name[20];
    float f;
    int n;
    std_data student;
    while (choice != 4) {
        printf("Enter choice : ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            printf("Add a student\n");
            end++;
            printf("Enter student id : ");

            scanf("%d", &student.id);
            printf("Enter student name : ");

            scanf("%s", student.name);
            printf("Enter student GPA : ");
            scanf("%f", &student.gpa);
            insert(end, student, &head);
            printf("Added successfully\n");
            break;
        case 2:
            printf("Listing out current student's records\n");
            traverse = head;
            printf("Name\tID\tGPA\n");
            while (traverse != NULL) {

                printf("%s\t", traverse->data.name);
                printf("%d\t", traverse->data.id);
                printf("%f\n", traverse->data.gpa);
                traverse = traverse->next;
            }
            break;
        case 3:
            int counter = 0;
            printf("Enter student id to delete : ");
            scanf("%d", &n);
            traverse = head;
            while (1) {
                if (traverse->data.id == n) {
                    break;
                }
                traverse = traverse->next;
                counter++;
            }
            deleted(counter, &head);
            printf("Succesfully deleted student with id : %d of index %d\n", n, counter);
            break;
        case 4:
            printf("Exit program");
            return  0;
        }
    }
    return 0;
}