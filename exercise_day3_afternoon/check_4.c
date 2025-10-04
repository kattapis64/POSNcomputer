#include<stdio.h>
int main(){
    int mx =0;
    int my =1;
    int x;
    int fib =0;
    for(x=0;x<17;x++){
        fib =mx+my;
        mx = my;
        my =fib;
        printf("%d ",fib);
    }
    printf("%d",fib);
    return 0;
}