#include<iostream>
#include<cstdio>
int main(){
    for(int i= 1;i<9+1;i++){
        for(int j = 1;j<i;j++){
            printf(" ");
        }printf("%d\n",i);
    }
    return 0;
}