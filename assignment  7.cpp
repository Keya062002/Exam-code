#include<iostream>
#include<cmath>
using namespace std;
  int main ()
  {
      double x=25.0;
      double squareRoot = sqrt(x);
      cout<<"Squareroot"<<" "<< x <<" is "<< squareRoot <<endl;
      double y = 27.0;
      double cubeRoot = cbrt(y);
      cout << "Cube root of " << y << " is: " << cubeRoot <<endl;
      double a = 2.0;
      double b = 3.0;
      double result = pow(a,b);
      cout << a << " raised to the power of " << b << " is: " << result << endl;


      return 0;

  }
