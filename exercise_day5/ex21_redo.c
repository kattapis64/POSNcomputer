#include<ctype.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    
    char *token;
    char arr[100][100];
    // Get the first token
    token = strtok(str, " ");
    int counter =0;
    // Loop through the rest of the tokens
    while (token != NULL) {
        for(int i = 0;i<strlen(token)-1;i++){
            arr[counter][i]=token[i];
        }
        token = strtok(NULL, " ");
        counter++;

        // Subsequent calls use NULL for the string
    }

    int c=0;
    for(int i =0;i<counter;i++){
        for(int j =0;j<counter;j++){
            if(strcmp(arr[i],arr[j])==0 &&j!=i){
                c++;
            }
        }
    }
    printf("%d",c);
    return 0;
}