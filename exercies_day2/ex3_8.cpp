#include<iostream>
#include<cstdio>
#include<cmath>
int main(){
    int n;
    std::cin >> n;
    if(n >=0){
        for(int i = 1;i<n;i++){
            printf("2^%d = %f\n",i,(float)pow(2,i));
        }
    }else if(n <0){
        for(int i = 0;i>n;i--){
            printf("2^%d = %f\n",i,(float)pow(2,i));
        }
    }
    return 0;
}