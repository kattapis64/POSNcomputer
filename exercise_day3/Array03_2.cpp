#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int arr[10];
    for(int i = 0;i<10;i++){
        cout << "Input "<<i<<" : ";
        cin >> arr[i];
    }
    
        cout<< "Element"<< "\t"<<"Value"<<"\t"<<"Histogram\n";
    for(int i = 0;i<10;i++){
        cout<< i<< "\t"<<arr[i] <<"\t";
        for(int j =0;j<arr[i];j++){
            printf("*");
        }
        cout << endl;
    }
    return 0;
}