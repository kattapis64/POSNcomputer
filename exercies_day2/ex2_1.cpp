#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n&1==1){
        printf("%d is and EVEN number",n);
    }else{
        printf("%d is and ODD number",n);
    }
    return 0;
}