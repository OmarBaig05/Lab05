#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

void time(int hrs , int min);
int minutes(int min);
main(){

    int hours;
    int minutes;

    cout << "Enter hours: ";
    cin >> hours;
    cout << "Enter minutes: ";
    cin >> minutes;
    time(hours , minutes);
}

void time(int hrs , int min){
min = min + 15;
if(min >= 60){
    min = min % 60;
    hrs = 1 + hrs;
}
if(hrs >= 24){
    hrs = 0;
}
cout << hrs <<":" << min << endl;

}