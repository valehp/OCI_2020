#include <iostream>

using namespace std;

int main() {
  int a,b,c;
  cin >> a >> b >> c;
  if(a%2 and b%2 and c%2){
    cout << "uniforme\n";
  }
  else if((not (a%2)) and (not (b%2)) and (not (c%2))){
      cout << "uniforme\n";
     
  }
  else cout << "variadito\n";

  return 0;
} 