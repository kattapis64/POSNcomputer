#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
   int  arr[n];
   int *p = &arr[0];
   for(int i = 0;i<n;i++){
    scanf("%d",p);
    p++;
   }
   p = &arr[0];
   for(int i = 0;i<n;i++){
    printf("%d\n",*p);
    p++;
   }
    return 0;
}