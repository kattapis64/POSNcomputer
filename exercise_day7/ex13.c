#include<stdio.h>
double sum(int n) {
    int s = 0;
    for (int i = 0;i <= n;i += 2) {
        s += i;
    }
    return s;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("The sum of even numbers from 2 to %d is %.0f", n, sum(n));
    return 0;
}