#include<cstdio>
#include<iostream>
using namespace std;
int main(){
    int n;
    printf("Enter a number : ");
    cin >> n;
    if(n<0){
        return 0;
    }
    int i,j;
    int max_length = (n-1)*2 +2-n;
    printf("\n");
    int count =0;
    for(int i =1;i<n+1;i++){
        for(int j =1;j<max_length+1;j++){
            if(i+j<=n){
                cout << " ";
            }else{
                if((n)-j>0){
                    cout << (n)-j;
                }else{
                    cout << j-(n);
                }
            }
        }
        max_length++;
        cout << endl;
    }
    return 0;
}