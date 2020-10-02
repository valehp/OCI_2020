#include <iostream>

using namespace std;

int main() {
  int a,b,c;
  cin >> a >> b >> c;
  if(a>c){
    if(a>b){
      cout << "mayor: " << a << "\n";
      if(b>c) cout << "menor: " << c << "\n";
      else cout << "menor: " << b << "\n";
    }  
    else{
      cout << "mayor: " << b << "\n";
      cout << "menor: " << c << "\n";
    }
  }
  else{
    if(c>b){
      cout << "mayor: " << c << "\n";
      if(b>a) cout << "menor: " << a << "\n";
      else cout << "menor: " << b << "\n";
    }
    else{  
      cout << "mayor: " << b << "\n";
      cout << "menor: " << a << "\n";
    }
  }
  return 0;
}