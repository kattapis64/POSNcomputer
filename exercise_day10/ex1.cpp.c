#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int main()
{
    string command;
    int counter;
    bool isNumber;
    vector<string> v(1);
    while(true)
    {
        cin >> command;
        isNumber = false;
        for(int i = 0;i<strlen(command);i++){
            counter == 0;
            if(command[i]==' '){
                counter++;
                if(ch[i+1]>='0' && ch[i+1]<='9'){
                    isNumber = true;
                }
            }
            cout << counter << isNumber << endl;
        }
    }
    return 0;
}
