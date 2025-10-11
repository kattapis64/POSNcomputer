#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main() {
    pair<char[20], float> arr[3];
    for (int i = 0;i < 3;i++) {
        cin >> arr[i].first;
        cin >> arr[i].second;
    }
    int temp = 0;
    char temps[20];
    for (int i = 0;i < 3 - 1;i++) {
        for (int j = 0;j < 3 - 1;j++) {
            if (arr[j].second < arr[j + 1].second) {
                temp = arr[j + 1].second;
                strcpy(temps, arr[j + 1].first);
                arr[j + 1].second = arr[j].second;
                strcpy(arr[j + 1].first, arr[j].first);
                arr[j].second = temp;
                strcpy(arr[j].first, temps);
            }
        }
    }

    for (int i = 0;i < 3;i++) {
        printf("%s", arr[i].first);
        printf("\t%f\n", arr[i].second);
    }
    return 0;
}