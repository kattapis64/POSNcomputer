#include<stdio.h>
int main(){
    unsigned int id;
    scanf("%u",&id);
    float salary;
    scanf("%f",&salary);\
    float ot;
    scanf("%f",&ot);
    salary += ot;

    if(salary >= 100000){
        salary += salary * 10/100;
    }
    else if(salary >= 70000){
        salary += salary * 7/100;
    }else if(salary >= 50000){
        salary += salary * 5/100;
    }else if(salary >= 30000){
        salary += salary * 3/100;
    }else{
        salary += salary * 1/100;
    }
    printf("%.2f",salary);
    return 0;
}