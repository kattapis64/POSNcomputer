#include<stdio.h>
void main(){
    float length;
    printf("Please enter the length in feet: ");
    scanf("%f",&length);
    printf("Length in ineches : %.2f",length*12);
}