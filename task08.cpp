#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;


float height(float , float);

main()
{
  system ("cls");

  float angle;
  float result;
  float base;

  cout << "Angle: ";
  cin >> angle;
  cout << "Base: ";
  cin >> base;


  cout << "Height: " << height (angle , base);;

}
 


float height(float angle, float distance){
  float degree = (3.14 / 180) * angle;
  float radian = tan(degree);
  float result = radian * distance;
  
  return result;
}