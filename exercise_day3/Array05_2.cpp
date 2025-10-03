#include<cstdio>
#include<iostream>
int main(){
    int mat_a[3][2];
    for(int i =0;i<3;i++){
        for(int j = 0;j<2;j++){
            std::cout << "Input for "<< i <<","<< j << " : ";
            std::cin >> mat_a[i][j];
        }
    }
    int transpose_a[2][3];
    for(int i =0;i<2;i++){
        for(int j = 0;j<3;j++){
            transpose_a[i][j] = mat_a[j][i];
        }
    }
    for(int i =0;i<2;i++){
        for(int j = 0;j<3;j++){
            std::cout << transpose_a[i][j]<<" ";

    }
    std::cout << std::endl;
    }
    return 0;
}