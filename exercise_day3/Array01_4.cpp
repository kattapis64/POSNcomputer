#include<iostream>
#include<cstdio>
int main(){
    int pass =0;
    int fail = 0;
    int arr[10];
    for(int i = 0;i<10;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>=50){
            pass++;
        }else{
            fail++;
        }
    }
    printf("PASS = %d\nFAIL = %d",pass,fail);
    return 0;
}