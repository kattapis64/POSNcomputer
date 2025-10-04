#include<stdio.h>
int main(void){
    int x,y,m;
    for(y=6;y>0;y-=2){
        for(x=2;x<5;x++){
            m = x+y+1;
            if((x+y)>6)
                m-=(x+y);
            printf("    %d",m);
        }
        printf("\n");
    }
    return 0;
}