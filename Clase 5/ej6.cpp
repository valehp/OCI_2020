#include <iostream>
using namespace std;

int main() {
  int a;
  cin >> a;
  int i=2;
  while(i<a){
    if(a%i==0){
      break;
    }
    ++i;
  }
  
  if(i==a)cout << "primo\n";
  else cout << "compuesto\n";
  return 0;
}