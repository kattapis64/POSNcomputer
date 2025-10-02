#include<iostream>
int main(){
    int x;
    int i;
    int max = 0;
    int min = 10000;
    for(i = 0;i<10;i++){
        scanf("%d",&x);
        if(x >max){
            max= x;
        }
        if(x < min){
            min = x;
        }
    }
    printf("Max = %d\nMin = %d",max,min);
    return 0;
}