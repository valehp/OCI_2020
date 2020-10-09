#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  if(n>=0){
    int a=2;
    while(n){
      cout << a << "\n";
      --n;
      a*=2;
    }
  }
  else cout <<"error, el valor es negativo\n";  
  return 0;
}