#include <iostream>
using namespace std;

int main() {
  int a,b;
  cin >> a >> b;
  int i=1;
  int c=i*b;
  while(c<=a){
    cout << c << "\n";
    ++i;
    c=i*b;
  }
  return 0;
}