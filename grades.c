#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d",&a);
    if(a<0 || a>100){
        printf("Invalid Input");
        return 1;
    }
    scanf("%d",&b);
    if(b<0 || b>100){
        printf("Invalid Input");
        return 1;
    }
    scanf("%d",&c);
    if(c<0 || c>100){
        printf("Invalid Input");
        return 1;
    }
    scanf("%d",&d);
    if(d<0 || d>100){
        printf("Invalid Input");
        return 1;
    }
    float mean = (a+b+d+c)/4;
    
    printf("Mean is %.2f\n",mean);
    


}