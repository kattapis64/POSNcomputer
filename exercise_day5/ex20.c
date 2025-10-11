#include<stdio.h>
#include<string.h>
int main(){
    char ch[100];
    fgets(ch,sizeof(ch),stdin);
    int counter =0;
    int words =0;
    while(ch[counter+1]!='\0'){
        counter++;
        if(ch[counter-2]!=' ' && ch[counter-1]==' '&& ch[counter]!=' '){
            words++;
        }
    }
    printf("Words : %d",words+1);
    return 0;
}