#include<stdio.h>
#include<string.h>
int main(void){
    char arr[100];
    fgets(arr,sizeof(arr),stdin);
    int counter= 0;
    while(arr[counter]!='\0'){
        counter++;
        if((int)arr[counter-1]>=97){
            arr[counter-1]-=97-65;
        }
    }
    printf("%s",arr);
    return 0;
}