#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

bool isSymmetrical(int number);
main()
{

  
  system ("cls");
  int number;

  cout << "Enter 3-digit number: ";
  cin >> number;
  if( isSymmetrical(number) == true){
   cout << "Symmetrical" << endl;
   }
  if( isSymmetrical(number) == false){
   cout << "NOT Symmetrical" << endl;
   }


}

bool isSymmetrical(int number){

int position1 = number % 10;
    number = number / 10;
int position2 = number % 10;
    number = number / 10;
int position3 = number % 10;
    number = number / 10;

  if (position1 == position3){
    return true;
  }
  if (position1 != position3){
    return false;
  }
}