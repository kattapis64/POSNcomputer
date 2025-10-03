#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    int arr[10];
    for(int i = 0;i<10;i++){
        cin >> arr[i];
        if(i&1==1){
            sum+= arr[i];
        }
    }
    cout << "Sum of number at the odd index : " << sum <<endl;
    return 0;
}