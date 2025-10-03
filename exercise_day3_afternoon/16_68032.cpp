#include<iostream>
int main(){
    int x;
    std::cin >>x;
    std::cout << 2;
    int res =2;

    for(int i =3;i<=x;i++){
        std::cout << "x" << i;
        res*=i;
    }
    std::cout << "= "<<res;
    return 0;
}