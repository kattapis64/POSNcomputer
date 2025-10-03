#include<iostream>
using namespace std;
int main(){
    int mat[5][3];
    int sum[3]={0};
    for(int i =0;i<5;i++){
        for(int j=0;j<3;j++){
            cin >> mat[i][j];
            sum[j]+=mat[i][j];
        }
    }
    cout << "Sum of column 1 ="<<sum[0]<<endl;
    cout << "Sum of column 2 ="<<sum[1]<<endl;
    cout << "Sum of column 3 ="<<sum[2]<<endl;

    return 0;
}
