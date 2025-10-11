#include<stdio.h>
#include<string.h>
int main(){
    char ch[100];
    scanf("%s",ch);
    for(int i = 0;i<strlen(ch);i++){
        
        if(i%3==0 && i!=0){
            printf(" ");
        }
        if(ch[i]=='A'){
            printf("%c",'U');
        }
        if(ch[i]=='T'){
            printf("%c",'A');
        }
        if(ch[i]=='C'){
            printf("%c",'G');
        }
        if(ch[i]=='G'){
            printf("%c",'C');
        } 
    }
    return 0;
}