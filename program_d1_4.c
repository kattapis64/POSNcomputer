#include<stdio.h>
int main(){
    int r;
    printf("Please enter the radius of the circle : ");
    scanf("%d",&r);
    const float PI = 3.141592653589;
    float c = 2*PI*r;
    printf("The circumferemce of tjhe circ;e is %f",c);
    return 0;
}