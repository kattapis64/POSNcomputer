#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int unit;
    cout << "enter water unit : ";
    cin >> unit;
    int charge;
    cout << "enter water service charge: ";
    cin >>charge;
    int price = 0;
    if(unit > 10){
        price+=min(unit,20)*5;
        if((unit >20)){
        price+=min(unit - 20,20)*7;
        if((unit >40)){ 
        price+=min(unit - 40,60)*10;
        if(unit>100){
        price+=(unit - 100)*15;
    }
    }
    }
    }
    
    
    
    cout << "Water bill before VAT is "<<price+charge<<" baht\n";
    cout << "VAT is 7.00% is "<<(float)(price+charge)*0.07<<" baht\n";
    cout << "Total water bill is "<<(float)(price+charge)*1.07<<" baht\n";
    
    return 0;}