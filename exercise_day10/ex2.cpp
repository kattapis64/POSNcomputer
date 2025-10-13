#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i =0;i<n;i++){

        cout << "\n";

        for(int j =0;j<n/2;j++){
            cout << " ";
        }
        for(int j =0;j<n/2;j++){
            cout << "*";
        }
    }
            cout << "\n";

    for(int i =0;i<n*3/4;i++){
        for(int j=0;j<n*3/4;j++){
            cout << "*";
        }
        cout << " ";
        for(int j=0;j<n*3/4;j++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
