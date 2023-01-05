#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

main()
{
  system ("cls");
  float number1;
  float number2;
  float degree;

  cout << "Number1: ";
  cin >> number1;
  cout << "Number2: ";
  cin >> number2;
  cout << "Degree: ";
  cin >> degree;
  cout << max(number1 , number2) << " is greater" << endl;
  Sleep(200);
  cout << min(number1 , number2) << " is smaller" << endl;
  Sleep(200);

  cout << pow(number1 , number2) << " is the Power of the first number" << endl ;
  Sleep(200);

  cout << cbrt(number1) << " is the Cube root of the number" << endl ;
  Sleep(200);

  cout << sqrt(number1) << " is the square root of the number" << endl ;
  Sleep(200);

  cout << ceil(number1) << " is ceiling of the number" << endl ;
  Sleep(200);

  cout << floor(number1) << " is floor of the number" << endl ;
  Sleep(200);

  degree = (3.14 / 180) * degree;
  cout << sin(degree) << " IS the Sin of " << degree << " radian " << endl;
  cout << cos(degree) << " IS the cos of " << degree << " radian " << endl;
  cout << tan(degree) << " IS the tan of " << degree << " radian " << endl;



}