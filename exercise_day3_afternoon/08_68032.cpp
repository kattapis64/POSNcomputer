#include<iostream>
#include<cstdio>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int counter_arr[1000] = {0};
    for(int i = 0;i<n;i++){
        std::cin >> arr[i];
        counter_arr[arr[i]]++;
    }
    int maxz = 0;
    for(int i = 0;i<1000;i++){
        if(maxz < counter_arr[i]){
            maxz = counter_arr[i];
        }
    }
    for(int i =0;i<1000;i++){
        if (counter_arr[i] == maxz){
            printf("%d\n",i);
        }
    }
    return 0;
}