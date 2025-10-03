#include<cstdio>
#include<iostream>
int main(){
    int arr[10];
    int sum = 0;
    for(int i = 0;i<10;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("SUM is %d\n",sum);
    printf("MEAN is %d",sum/10);

    return 0;
}