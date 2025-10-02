#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number for loop : ";
    cin >> n;
    int x;
    int max = 100000;
    for(int i = 1;i<1+n;i++){
        cout << "Number #"<<i<< " : ";
        cin >>x;
        if(x>max){
            max =x;
        }
    }
    cout << "Maximum is " << max <<endl;
    return 0;
}