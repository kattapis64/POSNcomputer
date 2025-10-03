#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n<0){
        cout << "Invalid Input";
        return 0;
    }
    for(int i =1;i<=n;i++){
        char ch = 'A';
        for(int j=0;j<i;j++){
            cout << ch++;
        }
        cout << endl;
    }
    return 0;
}