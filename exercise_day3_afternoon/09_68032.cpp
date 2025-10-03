#include<cstdio>
#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i =0;i<5;i++){
        cin >> arr[i];
    }
    for(int i =0;i<5;i++){
        cout << arr[i]<<" ";
        for(int j =0;j<arr[i];j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}