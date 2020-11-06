#include <iostream>

using namespace std;

int main() {

  int x, aux;

  cin >> x;

  aux = x;

  for(int i = 0; i < x; i++){
    for(int j = 0; j < aux; j++){
      cout << ".";
    }
    cout << endl;
    aux--;
  }
}