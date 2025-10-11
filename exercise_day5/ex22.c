#include<stdio.h>
#include<string.h>
int main(){
    char ch[100];
    fgets(ch,sizeof(ch),stdin);
    int sum=0;
    for(int i =0;i<strlen(ch);i++){
        if((ch[i]-'1'+1)%10 ==ch[i]-'1'+1){
            sum +=ch[i]-'1'+1;
        }
    }
    printf("Sum : %d",sum);
    return 0;
}