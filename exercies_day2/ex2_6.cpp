#include<iostream>
using namespace std;
int main(){
    bool isPrime;
    for(int i =2;i<100;i++){
        isPrime = true;
        for(int j = 2;j<i;j++){
            if(i%j==0)
            isPrime = false;
        }
        if(isPrime){
            cout << i << " ";
        }
    }
    return 0;
}