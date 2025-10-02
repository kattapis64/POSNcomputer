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
    int b;
    for(int j = 0;j<3;j++){
        while(dCounter <=m){
            for(b = d;b<7;b++){
                printf("%d\t",dCounter++);
                if(dCounter > m){

                    break;
                }
            }
            if(dCounter < m || (j!=2 && dCounter < m) || (j == 2 && dCounter == m))
            printf("\n");
            d=0;
        }
        d=b+1;
        dCounter = 1;
    }
    return 0;
}