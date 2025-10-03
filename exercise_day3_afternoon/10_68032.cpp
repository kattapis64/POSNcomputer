#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[5];
    int res = 0;
    for(int i =0;i<5;i++){
        int x=1;
        for(int j=5-i-1;j>0;j--){
            x*=10;
        }
        arr[i] = n/x;
        n%=x;
        res += arr[i] * pow(2,5-i-1);
    }

    printf("%d",res);
    return 0;
}