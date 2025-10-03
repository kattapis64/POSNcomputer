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

    int r = res;
    int res_x = 0;
    int rem;
    int counter =4;
    int tagr[5];
    int temp;
    for(int i =0;i<log10(r);i++){
        temp = res;
        res/=16;
        
        rem = temp%16;
        res_x += rem*pow(10,i);
    }
    printf("%d",res_x);
    return 0;
}