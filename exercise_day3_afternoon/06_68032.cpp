#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    cout << "Set A : \n";
    int arr[4];
    int brr[4];
    int counter = 0;
    for(int i = 0;i<4;i++){
        cin >> arr[i];
    }
    cout << "Set B : \n";
    for(int i = 0;i<4;i++){
        cin >> brr[i];
    }
    sort(arr,arr + sizeof(arr)/sizeof(int));
    sort(brr,brr + sizeof(arr)/sizeof(int));

    for(int i = 0;i<4;i++){
        if(arr[i] == brr[i]){
            counter++;
        }
    }
    cout << "Quantity of the same number : "<<counter;
    return 0;
}
