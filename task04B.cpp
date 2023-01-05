#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int odish(int number);
int evinish(int number);


main()
{
  system ("cls");
  int number;

  cout << "Enter 5-digit number: ";
  cin >> number;
  if(odish(number) != 0){
    cout << "oodish" << endl;
  }
  if(odish(number) == 0){
    cout << "Evinish" << endl;
  }

}





int odish(int number){

int position1 = number % 10;
    number = number / 10;
int position2 = number % 10;
    number = number / 10;
int position3 = number % 10;
    number = number / 10;
int position4 = number % 10;
    number = number / 10;
int position5 = number;

int sum = position1 + position2 + position3 + position4 + position5;
int odish = sum % 2;
return odish;

}

