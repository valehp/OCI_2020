#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a=2;
  while(a<=10){
    if(n%a==0)cout << a << "\n";
    ++a;
  }  
  return 0;
}