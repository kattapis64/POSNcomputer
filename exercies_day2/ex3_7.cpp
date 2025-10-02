#include<iostream>
#include<cstdio>
int main(){
    int n;
    std::cin >> n;
    if(n >=0){
        for(int i = 1;i<n;i++){
            printf("%d^2 = %d\n",i,i*i);
        }
    }else if(n <0){
        for(int i = 1;i>n;i--){
            printf("%d^2 = %d\n",i,i*i);
        }
    }
    return 0;
}