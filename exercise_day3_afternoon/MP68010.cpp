#include<cstdio>
#include<iostream>
using namespace std;
int main(){
    int mat[3][3];
    cout << "[1][1] [1][2] [1][3]";
    cin >> mat[0][0] >> mat[0][1] >> mat[0][2];
    cout << "[2][1] [2][2] [2][3]";
    cin >> mat[1][0] >> mat[1][1] >> mat[1][2];
    cout << "[1][1] [1][2] [1][3]";
    cin >> mat[2][0] >> mat[2][1] >> mat[2][2];
    int det_res =0;
    int x;
    int k;
    for(int i =0;i<3;i++){
        x=1;
        for(int j=0;j<3;j++){
            if((j+i)>2){
                k=j+i-3;
            }else{
                k=j+i;
            }
            x*=mat[j][k];
        }
        det_res+=x;
    }
    int m;
    for(int k=0;k<3;k++){
        x=1;
        for(int i =2;i>=0;i--){
            if((3-i-k)<0){
                m=3-i-k+3;
            }else if((3-i-k)>2){
                m=3-i-k-3;
            }else{
                m=3-i-k;
            }
            x*=mat[i][m];
        }
        det_res-=x;
    }
    cout << det_res;
    return 0;
}