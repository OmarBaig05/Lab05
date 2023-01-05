#include <iostream>
#include <cmath>
using namespace std;

main()
{
  system ("cls");
  float number1;
  float number2;

  cout << "Number1: ";
  cin >> number1;
  cout << "Number2: ";
  cin >> number2;
  cout << max(number1 , number2) << " is greater" << endl;
  cout << min(number1 , number2) << " is smaller" << endl;
  cout << pow(number1 , number2) << " is the Power of the first number" << endl ;
  cout << cbrt(number1) << " is the Cube root of the number" << endl ;
  cout << sqrt(number1) << " is the square root of the number" << endl ;
  cout << ceil(number1) << " is ceiling of the number" << endl ;
  cout << floor(number1) << " is floor of the number" << endl ;
}