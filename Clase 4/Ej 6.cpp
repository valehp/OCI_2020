#include <iostream>

using namespace std;

int main() {
  int a,b,c;
  cin >> a >> b >> c;
  if(a+b<(c*c)/a){
    cout << "cumple invariante\n";
  }
  return 0;
} 