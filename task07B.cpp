#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

float pipePercentage(float pipeFillingPerHour , float totalVolume);

main(){

    int volume;
    int pipe1;
    int pipe2;
    float hour;

    cout << "The volume of the pool in liters - an integer in the range of [1 ... 10000]: ";
    cin >> volume;
        cout << "The flow rate of the first pipe per hour – an integer in the range of [1 ... 5000]: ";
    cin >> pipe1;
    cout << "The flow rate of the second pipe per hour – an integer in the range of [1 ... 5000: ";
    cin >> pipe2;
    cout << "The hours that the worker is absent: ";
    cin >> hour;

    float P1total = hour * pipe1;
    float P2total = hour * pipe2;
    float totalVolume = P1total + P2total;
    float VolumePercentage = (totalVolume / volume ) * 100;
    
    if(totalVolume > volume){

        int diffVolume = totalVolume - volume;
        cout << "For " << hour << " hours the pool overflows with " << diffVolume << " liters";
    }
    if(totalVolume <= volume){
    cout << "The pool is " << VolumePercentage << "% full. " << "PIPE 1 : " << pipePercentage(P1total , totalVolume) << "% PIPE 2 : " << "%" << pipePercentage(P2total , totalVolume)  ;
    }
}



float pipePercentage(float pipeFillingPerHour , float totalVolume){

    float P1Percentage =( pipeFillingPerHour / totalVolume) * 100;
    return P1Percentage;
}
