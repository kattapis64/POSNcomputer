#include<iostream>
#include <cstdio>
using namespace std;
int main(){
    cout << "Enter money of product : ";
    int n;
    cin >> n;
    cout << "Enter money of paid : ";
    int k;
    cin >> k;
    cout << "Change money total : "<<k-n<<"baht"<<endl;
    n = k-n;
    int taosand = n/1000;
    int five_hundred = (n-taosand*1000)/500;
    int hundred = ((n-taosand*1000) - five_hundred*500)/100;
    int fivety = (((n-taosand*1000) - five_hundred*500) - hundred*100)/50;
    int twenty = ((((n-taosand*1000) - five_hundred*500) - hundred*100) - fivety*50)/20;
    int tens = (((((n-taosand*1000) - five_hundred*500) - hundred*100) - fivety) - twenty*20)/10;
    int five = ((((((n-taosand*1000) - five_hundred*500) - hundred*100) - fivety) - twenty*20) - tens*10)/5;
    int two = (((((((n-taosand*1000) - five_hundred*500) - hundred*100) - fivety) - twenty*20) - tens*10)-five*5)/2;
    int one = ((((((((n-taosand*1000) - five_hundred*500) - hundred*100) - fivety) - twenty*20) - tens*10)-five*5)/2 - two*2);
    if(taosand!=0){
        printf("1000 = %d\n",taosand);
    }
    if(five_hundred!=0){
        printf("500 = %d\n",five_hundred);
    }
    if(hundred!=0){
        printf("100 = %d\n",hundred);
    }
    if(fivety!=0){
        printf("50 = %d\n",fivety);
    }
    if(twenty!=0){
        printf("20 = %d\n",twenty);
    }
    if(tens!=0){
        printf("10 = %d\n",tens);
    }
    if(five!=0){
        printf("5 = %d\n",five);
    }
    if(two!=0){
        printf("2 = %d\n",two);
    }
    if(one>0){
        printf("1 = %d\n",one);
    }
    return 0;
}