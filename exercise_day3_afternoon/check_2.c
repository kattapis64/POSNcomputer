#include<stdio.h>
int main(){
    long long x,sum =0;
    long long y=0;
    for(x=0;x<100;x++)
    {
        if((x%3)==0)
            y =sum-x;
        sum = sum+y;
        
    printf("sum = %lld\n",sum);
    }
    printf("sum = %lld\n",sum);
    return 0;
}