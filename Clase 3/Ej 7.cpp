#include <iostream>

using namespace std;

//Solución 1:
/*int main() {
  int x,y;
  cin >> x >> y;
  int a=x+y;
  a=a/(3*x);
  int b=(x/y)+3;
  b=b*5;
  int c=2*y;
  int z=(a+b)/(c);
  cout << "Z = " << z << "\n";
  return 0;
}*/

//Solución 2:
int main() {
  int x,y;
  cin >> x >> y;
  cout << "Z = " << (((x+y)/(3*x))+5*((x/y)+3))/(2*y) << "\n";
  return 0;
}