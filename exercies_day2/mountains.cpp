#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i =0;i< n;i++){
        cin >> arr[i];
    }
    int max=0;
    for(int i =0;i<n;i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    int center_arr[n];
    int temp =0;
    for(int i =0;i<n;i++){
        temp+=(arr[i]-1);
        
        center_arr[i] = temp;
        temp+=(arr[i]-1)+1;
    }
    for(int i =0;i<n;i++){
        cout << center_arr[i]<<endl;
    }
    int k;
    int counter = 0;
    for(int j = max-1,l =0;j>=0,l<max;j--,l++){
        counter=0;
        int p=0;
        for(int i =0;i<n;i++){
            if(arr[i]>j){
                p++;
            }
        }
        p=n-p;
        
        for(int i =0;i<n;i++){
            if(p==0){
            for(int j =0;j<(max-l);j++){
                  
            cout <<" ";
                }
            
            k=(2*(l-(max-arr[i]))+1);
            if(arr[i]-1>=j){
                counter++;
                for(int j =0;j<k;j++){
                    cout <<"x";
                }
                for(int j =0;j<(max-l);j++){
                    cout <<" ";
                }
            }
         
                
            

        }
        cout <<endl;
    }
    return 0;
}