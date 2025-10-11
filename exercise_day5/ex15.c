#include<stdio.h>
int main(){
    char ch[100];
    printf("Input : ");
    scanf("%s",ch);
    int counter = 0;
    while(ch[counter]!='\0'){
        counter++;
    }
    printf("Output : Length : %d",counter);
    return 0;
}