#include<stdio.h>
#include<string.h>
int main(){
    char ch1[100],ch2[100];
    scanf("%s%s",ch1,ch2);
    printf("%s",strcat(ch1,ch2));
    return 0;
}