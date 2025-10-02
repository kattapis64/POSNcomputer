#include<iostream>
#include<cstdio>
int main(){
    int n;
    scanf("%d",&n);
    bool isPrime;
    int counter = 0;
    for(int i = 2;i<n;i++){
        isPrime = true;
        for(int j = 2;j<i;j++){
            if(i%j == 0){
                isPrime = false;
            }
        }
        if(isPrime){
            printf("Prime -> %d\n",i);
            counter++;
        }
    }
    printf("Have Prime %d",counter);
    return 0;
}