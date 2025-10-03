#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int sum = 0;
    int arr[10];
    int counter = 0;
    for(int i = 0;i<10;i++){
        cin >> arr[i];
        if(arr[i]>0){
            sum+= arr[i];
            counter++;
        }
    }
    cout << "Average of positive number : " << (float)sum/counter <<endl;
    return 0;
}