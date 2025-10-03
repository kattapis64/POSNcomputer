#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i = 0;i<5;i++){
        cin >> arr[i];
    }for(int i = 5-1;i>=0;i--){
        cout <<  arr[i] << endl;
    }
    return 0;
}