#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int max_height =0;
    
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
        if(max_height<arr[i]){
            max_height=arr[i];
        }
    }
    printf("%d\n",max_height);
    for(int i =0;i<max_height;i++){
        for(int j=0;j<n;j++){
                if((i-max_height+arr[j])>=0){
                for(int k =0;k<arr[j]-(i-max_height+arr[j])-1;k++){
                    printf(" ");
                }}else{
                    for(int k=0;k<arr[j];k++){
                        printf(" ");
                    }
                }
                if((i-max_height+arr[j])>=0){
                printf("/");
                }else{
                //printf(" ");

                }
                for(int k =0;k<i-max_height+arr[j];k++){
                    printf(" ");
                }
                for(int k =0;k<i-max_height+arr[j];k++){
                    printf(" ");
                }
                if((i-max_height+arr[j])>=0){
                printf("\\");
                }else{
                //printf(" ");

                }
                if((i-max_height+arr[j])>=0){
                for(int k =0;k<arr[j]-(i-max_height+arr[j])-1;k++){
                    printf(" ");
                }}else{
                    for(int k=0;k<arr[j];k++){
                        printf(" ");
                    }
                }
        }
        printf("\n");
    }
    return 0;
}