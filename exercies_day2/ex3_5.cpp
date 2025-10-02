#include<iostream>
int main(){
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    for(int i = 0;i<1000;i++){
        if(i%a== 0 && i%b == 0){
            printf("%d can be divided by %d and %d\n",i,a,b);
        }
    }
    return 0;
}