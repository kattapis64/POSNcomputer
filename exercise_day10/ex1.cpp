#include<iostream>
#include<vector>
#include<cstring>
#include<string>
using namespace std;
void print(vector<string> v)
{
    vector<string>::iterator  it;
    for(it = v.begin(); it!=v.end(); it++)
    {
        cout << *it << " ";
    }

}
int main()
{
    int counter;
    bool isNumber;
    vector<string> v;
    int last_ind =0;
    while(true)
    {
    string command;

        string arr[3];
        getline(cin, command);
        isNumber = false;
        counter = 0;
        last_ind = 0;
        for(int i = 0; i<command.length()-1; i++)
        {

            if(command[i]==' ')
            {
                arr[counter] = command.substr(last_ind,i-last_ind);

                counter++;
                last_ind = i;
                if(command[i+1]>='0' && command[i+1]<='9')
                {
                    isNumber = true;
                }
            }
        }
        //if(counter == 2)
        //{
            arr[counter] = command.substr(last_ind+1,command.length()-1);
        //}
        if(arr[0]=="add")
        {
            v.push_back(arr[1]);;
        }
        else if(arr[0]=="insert")
        {
            v.insert(v.begin() + stoi(arr[1]),arr[2]);
        }else if(arr[0] == "remove"){
            v.erase(v.begin() + stoi(arr[1])-1);
        }
        else if(arr[0]=="how")
        {
            if(v.empty())
            {
                cout << "Empty\n";
            }
            else
            {
                print(v);
                cout << endl;
            }
        }else if(arr[0]=="lear"){
            int k= v.size();
            for(int i =0;i<k;i++){
                v.erase(v.begin());
            }
        }else if(arr[0]=="xit"){
            return 0;
        }
    }
    return 0;
}
