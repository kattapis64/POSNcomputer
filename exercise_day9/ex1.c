#include<string.h>
#include<stdio.h>
int n;
int top = -1;
int isFull() {
    printf("%d\n", top);
    if (top == n) {
        return 1;
    }
    else {
        return 0;
    }
}
int isEmpty() {
    if (top == -1) {
        return 1;
    }
    else {
        return 0;
    }
}
int push(char* stack, char data) {
    if (isFull) {
        top++;
        *(stack) = data;
    }
    else {
        return 1;
    }
}
char pop(char* stack) {
    if (!isEmpty()) {
        char data = *stack;
        *stack = 0;
        top--;
        return data;
    }
    else {
        printf("can not find data");
    }
}
int main() {
    char ch[100];
    scanf("%s", ch);
    n = strlen(ch);
    char stack[n];
    char* ptr = &stack[0];
    for (int i = 0;i < n;i++) {
        push(ptr, ch[i]);
        ptr++;
    }
    ptr = &stack[n - 1];
    for (int i = 0;i < n;i++) {
        printf("\n%c ", pop(ptr));
        ptr--;
    }
    return 0;
}