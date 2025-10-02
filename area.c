#include<stdio.h>
int main(){
    int a;
    float rate;                                        
    printf("Please input area : ");
    scanf("%d",&a);
    if(a<80){
        rate = 12.50;
    }else if(a>=80 && a <=200){
        rate = 10;
        }else if(a>200 && a <400){
        rate = 7.5;
    }else if(a>400){
        rate = 5;
    }
    printf("Total servoce cost %f",(float) rate*a);
    return 0;
}