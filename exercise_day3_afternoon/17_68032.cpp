#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n;
    cin >>n;
    int max =-1;
    int min = 101;
    int sum = 0;
    int x;
    for(int i =0;i<n;i++){
        cin >>x;
        sum+=x;
        if(max<x){
            max =x;
        } 
        if(min>x){
            min =x;
        }
        if(x>100){
            cout <<"Invalid Input";
            return 0;
        }

    }

    cout << "Max "<<max<<endl;
    cout << "Min "<<min<<endl;
    cout << "Sum "<<sum<<endl;
    cout << "Avg = "<<(float)sum/n<<endl;



    return 0;
}