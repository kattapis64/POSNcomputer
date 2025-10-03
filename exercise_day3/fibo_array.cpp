#include<cstdio>
#include<iostream>
using namespace std;
int main(){
    int n;
    printf("Enter a number : ");
    cin >> n;
    int arr[n];     
    for(int i =0;i<n;i++){
        arr[i] =-1;
    }
    arr[0] =0;
    arr[1]=1;
    for(int i = 0;i<n;i++){
        if(arr[i]==-1){
            arr[i] = arr[i-1] + arr[i-2];
        }
    }
    printf("%d",arr[n-1]);
    return 0;
}