#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n<0){
        cout << "Invalid Input";
        return 0;
    }
     char ch = 'A';
    for(int i =1;i<n+1;i++){
        
        for(int j=0;j<i;j++){
            
            cout << ch--;
            if (ch>'Z'){
                ch-='a'-'A';
            }
            
        }
        
        ch+=2*i+1;
        cout << endl;
    }
    return 0;
}