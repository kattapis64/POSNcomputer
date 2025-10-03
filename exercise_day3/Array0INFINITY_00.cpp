#include<cstdio>
#include<iostream>
using namespace std;
int main(){
    int n;
    printf("Enter a number : ");
    cin >> n;
    int i,j;
    int max_length = (n-1)*2 +2-n;
    printf("\n");
    for(int i =1;i<n+1;i++){
        for(int j =1;j<max_length+1;j++){
            if(i+j<=n){
                cout << " ";
            }else{
                cout << '*';
            }
        }
        max_length++;
        cout << endl;
    }
    return 0;
}