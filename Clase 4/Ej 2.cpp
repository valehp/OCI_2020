#include <iostream>

using namespace std;

int main() {
  int numero;
  cin >> numero;
  if(!numero%2){
    cout << "par";
  }
  else cout << "impar";
  return 0;
}