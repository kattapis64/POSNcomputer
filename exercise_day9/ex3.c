#include<stdio.h>
#include<stdlib.h>
typedef struct Queue {
    int head, tail, size;
    unsigned capacity;
    int* arr;
}Queue;
Queue* createQ(unsigned capa) {
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    queue->capacity = capa;
    queue->head = 0;
    queue->size = 0;
    queue->tail = capa - 1;

    queue->arr = (int*)malloc(capa * sizeof(int));
}
int isFull(Queue* q) {
    return q->size == q->capacity;
}
int isEmpty(Queue* q) {
    return q->size == 0;
}
void add_q(Queue* q, int data) {
    q->tail = (q->tail + 1) % q->capacity;
    q->arr[q->tail] = data;
    q->size += 1;
    printf("add %d to q\n", data);
}
int d_q(Queue* q) {
    int curr_front = q->arr[q->head];
    q->head = (q->head + 1) % q->capacity;
    q->size--;
    return curr_front;
}
int main() {
    Queue* qanon = createQ(4);
    add_q(qanon, 1);
    add_q(qanon, 2);
    add_q(qanon, 3);
    add_q(qanon, 4);
    int n;
    scanf("%d", &n);
    int data;
    for (int i = 1;i < n + 1;i++) {
        data = d_q(qanon);
        add_q(qanon, data);
        printf("%d \n", data);

    }
    for (int i = 0;i < 4;i++) {
        printf("%d ", d_q(qanon));
    }
    return 0;
}
