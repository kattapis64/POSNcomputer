#include<stdio.h>
int gcd(int a, int b) {
    int x = a;
    int y = b;
    int z;
    while (y > 0) {
        z = x % y;
        x = y;
        y = z;
    }
    return x;
}
int main() {
    printf("%d", gcd(12, 30));
    return 0;
}