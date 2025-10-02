#include<stdio.h>
int main(){int w,x,y,z;scanf("%d",&w);scanf("%d",&x);scanf("%d",&y);scanf("%d",&z);    int odd = 0;
    int even = 0;

    if(w&1 == 1){
        odd++;
    }else{
        even++;
    }

    if(x&1 == 1){
        odd++;
    }else{
        even++;
    }
    if(y&1 == 1){
        odd++;
    }else{
        even++;
    }
    if(z&1 == 1){
        odd++;
    }else{
        even++;
    }
    printf("ODD = %d ; EVEN = %d\n",odd,even);
    return 0;
}