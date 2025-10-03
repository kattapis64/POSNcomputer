#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int positive = 0;
    for(int i = 0;i<10;i++){
        cin >> arr[i];
        if(arr[i]>0){
            positive++;
        }
    }
    cout << "Quantity of positive number : " << positive;

    return 0;
}