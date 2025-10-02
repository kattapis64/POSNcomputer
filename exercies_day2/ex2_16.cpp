#include<iostream>
using namespace std;
int main(){
    cout << "Enter distance (kiolmetrer) : ";
    int n;
    cin >> n;
    int rate;
    if(n==1){
        rate = 35;
    }else if(n >1 && n<=10){
        rate = 5.5;
    }else if(n >1 && n<=10){
        rate = 6.5;
    }else if(n >1 && n<=10){
        rate = 7.5;
    }else if(n >1 && n<=10){
        rate = 8;
    }else if(n >1 && n<=10){
        rate = 9;
    }else{
        rate= 10.5;
    }
    cout << "taxi fare si " << rate*n<<endl;
    return 0;
    
}