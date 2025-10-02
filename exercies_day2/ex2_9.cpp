#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int start,finish;
    printf("Enter multiplpication from : ");
    cin >> start;
    printf("Enter multiplpication to : ");
    cin >> finish;
    for(int i =1;i<=12;i++){
        for(int j = start;j<=finish;j++){
            std::cout << j <<"x "<<i<< "=\t"<<j*i<<"\t";
        }
        std::cout << std::endl;
    }

    return 0;
}