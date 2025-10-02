#include<stdio.h>
int main(){
    int score;
    scanf("%d",&score);
    char grade;
    if(score> 100 || score<0){
        printf("error\n");
        return 1;
    }else if(score > 79){
        grade = 'A';
    }else if(score > 69){
        grade = 'B';
    }else if(score > 59){
        grade = 'C';
    }else if(score > 49){
        grade = 'D';
    }else{
        grade = 'F';
    }
    printf("Grade is %c\n",grade);
    return 0;
}