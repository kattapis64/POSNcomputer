#include<iostream>
int main(){
    char ch;
    std::cin >> ch;
    if(ch > 'Z'){
        ch -= 'a' - 'A';
    }
    for(int i = (int) ch;i>=65;i--){
        printf("%c\n",i);
    }
    return 0;
}