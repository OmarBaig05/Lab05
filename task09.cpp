
#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

float quadraticFormulaPos( float , float , float);
float quadraticFormulaNeg(float value1 , float value2 , float value3);
int main()
{
  system ("cls");
  float a;
  float b;
  float c;

  cout << "Enter value of a: " ;
  cin >> a;
  cout << "Enter value of b: " ;
  cin >> b;
  cout << "Enter value of c: " ;
  cin >> c;
  cout << "X is equal to: " << quadraticFormulaPos(a , b , c) << ", ";
  cout << quadraticFormulaNeg(a , b , c) << endl ;

}

float quadraticFormulaPos(float value1 , float value2 , float value3){

float val2 = value2 * value2;
      value2 = (-1) * value2;
float prod = 4 * value1 * value3;
float underRoot = sqrt(val2 - prod);
float result1 = (value2 - underRoot)/( 2 * value1 );
return (result1);
}
float quadraticFormulaNeg(float value1 , float value2 , float value3){

float val2 = value2 * value2;
      value2 = (-1) * value2;
float prod = 4 * value1 * value3;
float underRoot = sqrt(val2 - prod);
float result2 = (value2 + underRoot)/( 2 * value1 );
return (result2);
}