#include<stdio.h>
#include<string.h>
int main(){
    char cha[100];
    char cha1[100];
    scanf("%s",cha);
    scanf("%s",cha1);
    int ch[100];
    int ch1[100];
    for(int i=0;i<strlen(cha);i++){
        ch[i]=(int) cha[0];
    }
    for(int i=0;i<strlen(cha1);i++){
        ch1[i]=(int) cha1[0];
    }
    int count[123] ={0};
    int count1[123] ={0};
    int* p = &ch[0];
    int* p1 = &ch1[0];
    for(int i =0;i<strlen(cha);i++){
        count[*p]++;
        p++;
    }
    for(int i =0;i<strlen(cha1);i++){
        count[*p1]++;
        p1++;
    }
    p = &count[0];
    p1 = &count1[0];
    for(int i =0;i<100;i++){
        if(*p!=*p1){
            printf("not anagram");
            return 0;
        }
    }
    printf("is anagram");

    return 0;
}