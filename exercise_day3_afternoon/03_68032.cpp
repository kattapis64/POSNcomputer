#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int sum =0;
    int max =0;
    int min = 10000;
    for(int i = 0;i<10;i++){
        cin >> arr[i];
        sum+=arr[i];
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout << "Sum : "<< sum<<endl;
    cout << "Avg : "<< sum/10<<endl;
    cout << "Max : "<< max<<endl;
    cout << "Min : "<< min<<endl;
    
    return 0;
}