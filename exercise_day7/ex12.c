#include"stdio.h"
double percentage(int a, int b) {
    return (double)a / b * 100;
}
int main() {
    int std_score;
    int full_score;
    printf("Enter student's mark : ");
    scanf("%d", &std_score);
    printf("Enter full mark : ");
    scanf("%d", &full_score);
    printf("The student gott %.2f percent", percentage(std_score, full_score));
    return 0;
}