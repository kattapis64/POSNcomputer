#include<iostream>
#include<cstdio>
int main(){

    int length = 9*2-1;
    for(int j = 0;j<8;j++){
            printf(" ");
        }
    printf("1\n");
    for(int i = 2;i<10;i++){
        for(int j = 0;j<(9-i);j++){
            printf(" ");
        }
        printf("%d",i);
        for(int k = 0;k < (i - 1)*2-1;k++){
            printf(" ");
        }
        printf("%d",i);
        for(int j = 0;j<(9-i);j++){
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}