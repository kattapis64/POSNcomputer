#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int d;
    int m;
    cin >>d;
    cin >>m;
    int dCounter = 1;
    d--;
    for(int i = 0;i<d;i++){
        printf("\t");
    }
    while(dCounter <=m){
        for(int i = d;i<7;i++){
            printf("%d\t",dCounter++);
            if(dCounter > m){
                break;
            }
        }
        printf("\n");
        d=0;
    }
    return 0;
}