#include<iostream>
using namespace std;
int main(){
    int mat[3][2];
    int sum = 0;
    for(int i =0;i<3;i++){
        for(int j=0;j<2;j++){
            cin >> mat[i][j];
            sum +=mat[i][j];
        }
    }
    cout <<sum<<endl;
    return 0;
}
