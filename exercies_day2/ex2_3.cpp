#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number for loop : ";
    cin >> n;
    int x;
    int min = 100000;
    for(int i = 1;i<1+n;i++){
        cout << "Number #"<<i<< " : ";
        cin >>x;
        if(x<min){
            min =x;
        }
    }
    cout << "Minimum is " << min <<endl;
    return 0;
}