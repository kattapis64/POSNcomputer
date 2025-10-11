#include<stdio.h>
#include<string.h>
int main(){
    char ch[20];
    scanf("%s",ch);
    for(int i =0;i<strlen(ch);i++){
        if(ch[i]>96){
            ch[i]-=97-65;
        }else{
            ch[i]+=97-65;
        }
    }
    printf("%s",ch);
    return 0;
}