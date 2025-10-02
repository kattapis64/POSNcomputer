#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int unit;
    cout << "enter water unit : ";
    cin >> unit;
    int price = 0;
    if((unit >=10)&&(unit < 20)){
        price+=min(unit,20)*5;
    }else if((unit >=20)&&(unit < 40)){
        price+=min(unit - 20,40)*7;
    }else if((unit >=40)&&(unit < 100)){
        price+=min(unit - 40,100)*10;
    }else{
        price+=(unit - 100)*15;
    }
    cout << "Pay water is : "<<price;
    return 0;
}