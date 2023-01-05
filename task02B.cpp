
#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

bool character(char alphabet);
mian(){

char Alphabet;

cout << "Enter the alphabet (A , a): ";
cin >> Alphabet ;
if (character(Alphabet) == true){
    cout << "Alphabet is upper case";
}
if (character(Alphabet) == false){
    cout << "Alphabet is lower case";
}
}


bool character(char alphabet){
    if (alphabet == 'A'){
    return true;
}
    if (alphabet == 'a'){
    return false;
}
}