#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int main(){
    int x;
    cout << "Enter number (100 MAX) : ";
    cin >>x;
    int k =x;
    int sum = 0;
    for(int i =0;i<100;i++){
        sum+=k%10;
        k/=10;
    }
    printf("SUm total is %d",sum);
    return 0;
}