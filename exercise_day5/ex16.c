#include<stdio.h>
#include<string.h>
int main(){
    char ch[100];
    printf("Input : ");
    scanf("%s",ch);
    int length = strlen(ch);
    char ch_reverse[100];
    int counter =0;
    int k;
    for(int i =0;i<length;i++){
        if(length-i-1<0){
            k=length-i-1+length;
        }else{
            k= length-i-1;
        }
        ch_reverse[i]= ch[k];
    }
    if(strcmp(ch,ch_reverse)==0){
        printf("Output : Palindrome");
    }else{
        printf("Not Palindrome"); 
    }
    return 0;
}