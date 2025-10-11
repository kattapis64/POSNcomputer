#include<stdio.h>
void bubble_sort(int* ptr, int size) {
    int max;
    int max_index;
    int* max_ptr;
    int* head = ptr;
    int val;
    int temp;
    for (int i = size - 1;i >= 0;i--) {
        max = 0;
        ptr = head;
        for (int j = 0;j < i + 1;j++) {
            if (*ptr > max) {
                max = *ptr;
                max_index = j;
                max_ptr = ptr;
            }
            ptr++;
        }
        printf("%d \n", *max_ptr);
        val = *(head + i);
        temp = val;
        ptr = head + i;
        *ptr = *max_ptr;
        *max_ptr = temp;
        printf("%d \n", *max_ptr);
        printf("%d \n", *head);


    }
}
int main() {
    int arr[5] = { 1,5,4,2,3 };
    bubble_sort(&arr[0], 5);
    for (int i = 0;i < 5;i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}