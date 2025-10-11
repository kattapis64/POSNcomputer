#include<stdio.h>
#include<string.h>
int main(){
    char ch[17];
    for(int i =0;i<17;i++){
        if(i==1 || i==6 || i==12 || i==15){
            ch[i]='-';
        }else{
        scanf("%c",&ch[i]);
        }
    }
    printf("%s",ch);
    return 0;
}