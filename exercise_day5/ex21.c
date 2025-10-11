#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
    char ch[100];
    fgets(ch, sizeof(ch), stdin);
    int counter = 0;
    int words = 0;
    int cut[100];

    while (ch[counter + 1] != '\0') {
        counter++;
        if (ch[counter - 2] != ' ' && ch[counter - 1] == ' ' && ch[counter] != ' ') {
            cut[words] = counter;
            printf("%d", cut[words]);
            words++;

        }
    }
    printf("Words : %d", words + 1);
    counter = 0;
    int k;
    int dummy = 0;
    for (int i = 0;i < words;i++) {
        printf("%c", ch[cut[i] - 1]);
    }
    char arr[words + 1][100];
    for (int i = 0;i < words + 1;i++) {
        for (int j = 0;j < 100 + 1;j++) {
            arr[i][j] = ' ';
        }
    }
    for (int i = 0;i < words;i++) {
        if (i == 0) {
            for (int j = 0;j < cut[i] - 1;j++) {
                printf("%c", ch[j]);
                arr[i][j] = ch[j];
            }
        }
        else {
            for (int j = cut[i - 1];j < cut[i] - 1;j++) {
                printf("%c", ch[j]);
                arr[i][j] = ch[j];

            }
        }
        printf("\n");
    }
    for (int j = cut[words - 1];j < strlen(ch) - 1;j++) {
        printf("%c", ch[j]);
        arr[words][j] = ch[j];

    }
    for (int i = 0;i < words + 1;i++) {
        for (int j = 0;j < 100 + 1;j++) {
            printf("%c", arr[i][j]);
        }
    }
    printf("------------------------------------");
    int c = 0;
    int isGay = 0;
    for (int i = 0;i < words + 1;i++) {
        for (int j = 0;j < 100;j++) {
            for (int k = 0;k < words + 1;k++) {
                for (int m = 0;m < 100;m++) {
                    if (i != k && arr[i][j] != ' ' && arr[k][m] != ' ' && arr[i][j] == arr[k][m]) {
                        isGay = 1;
                        printf("H");
                    }
                    else if (arr[i][j] != ' ' && arr[k][m] != ' ') {
                        isGay = 0;
                        printf("M");

                    }
                }
                if (isGay) {
                    c++;
                }
            }

        }
    }
    printf("%d", c);
    return 0;
}