#include<iostream>
int main(){
    int x;
    int i;
    float sum = 0;
    for(i = 0;i<10;i++){
        scanf("%d",&x);
        sum+=x;
    }
    sum/=10;
    printf("Mean is %f",sum);
    return 0;
}