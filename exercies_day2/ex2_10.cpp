#include<iostream>
int main(){
    for(int i =9;i>0;i--){
        for(int j = 1;j<=9-i;j++){
            printf(" ");
        }
        for(int j = 1;j<=i;j++){
            printf("%d",j);
        }printf("\n");
    }
    return 0;
}