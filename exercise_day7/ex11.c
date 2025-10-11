#include"stdio.h"
#include"math.h"
int num_res(int a, int b, int c) {
    double discriminant = pow(b, 2) - 4 * a * c;
    printf("Discriminant is %f\n", discriminant);
    if (discriminant > 0) {
        return 2;
    }
    else if (discriminant == 0) {
        return 1;
    }
    else {
        return 0;
    }
}
void solve_quadratic(int a, int b, int c, int n, float* ptr) {
    double discriminant = sqrt(pow(b, 2) - 4 * a * c);
    if (n == 1) {
        *ptr = (-b + discriminant) / (2 * a);
    }
    else {
        *ptr = (-b + discriminant) / (2 * a);

        *(++ptr) = (-b - discriminant) / (2 * a);

    }
}
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int n = num_res(a, b, c);
    if (n == 0) {
        printf("no real roots.");
        return 0;
    }
    float res[n];
    float* res_ptr = &res[0];
    solve_quadratic(a, b, c, n, res_ptr);
    for (int i = 0;i < n;i++) {
        printf("The %d root is %.2f\n", i + 1, res[i]);
    }
    return 0;
}