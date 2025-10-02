#include<iostream>
int main(){
    for(int i =1;i<=12;i++){
        for(int j = 2;j<=7;j++){
            std::cout << j <<"x "<<i<< "=\t"<<j*i<<"\t";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    for(int i =1;i<=12;i++){
        for(int j = 8;j<=13;j++){
            std::cout << j <<"x "<<i<< "=\t"<<j*i<<"\t";
        }
        std::cout << std::endl;
    }
    return 0;
}