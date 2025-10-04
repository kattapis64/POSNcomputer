#include<iostream>
using namespace std;
int main(){
   double LST;
    double LONG;
    int pGMT; 

    cout << "Enter local standard time (hours): ";
    cin >> LST;
    cout << "Enter longitude (degrees): ";
    cin >> LONG;
    cout << "Enter timezone offset from GMT: ";
    cin >> pGMT;

    double zone_long = pGMT * 15.0;
    double LMT = LST + (LONG - zone_long) / 15.0;

    cout << "Local Mean Time (hours): " << LMT << endl;
    return 0;
}