#include<stdio.h>
int isLeap(int y) {
    if (y % 400 == 0) {
        return 1;
    }
    else {
        if (y % 100 == 0) {
            return 0;
        }
        else if (y % 4 == 0) {
            return 1;
        }
    }
    return 0;
}
int dMonth(int n, int y) {
    int months[12] = { 31,28 + isLeap(y - 543),31,30,31,30,31,31,30,31,30,31 };
    return months[n - 1];
}
int main() {
    int n;
    scanf("%d", &n);
    int y;
    scanf("%d", &y);
    printf("%d", dMonth(n, y));
    return 0;
}