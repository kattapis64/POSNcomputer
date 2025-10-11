#include<stdio.h>
double guess(int n, double guess) {
    return (guess + n / guess) / 2;
}
int main() {
    int n = 145454850;
    double init_guess = n / 2;
    double prev_guess;
    for (int i = 0;i < 10000;i++) {
        init_guess = guess(n, init_guess);
        if (init_guess == prev_guess) {
            break;
        }
        printf("%f ", init_guess);
        prev_guess = init_guess;
    }
    return 0;
}