#include<cstdio>
#include<iostream>
int main(){
    int mat_a[3][2];
    int mat_b[3][2];
    for(int i =0;i<3;i++){
        for(int j = 0;j<2;j++){
            std::cout << "Input for "<< i <<","<< j << " : ";
            std::cin >> mat_a[i][j];
        }
    }
    for(int i =0;i<3;i++){
        for(int j = 0;j<2;j++){
            std::cout << "Input for "<< i <<","<< j << " : ";
            std::cin >> mat_b[i][j];
        }
    }
    for(int i =0;i<3;i++){
        for(int j = 0;j<2;j++){
            std::cout << mat_a[i][j] + mat_b[i][j] <<" ";

    }
    std::cout << std::endl;
    }
    return 0;
}