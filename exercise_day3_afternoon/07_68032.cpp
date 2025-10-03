#include<iostream>
int main(){
    int arr[10];
    int counter = 0;
    for(int i =0;i<10;i++){
        std::cin >> arr[i];
        if (40%arr[i] == 0){
            counter++;
        }
    }
    std::cout << "The number of factors of 40 : " << counter <<std::endl;
    return 0;
}