#include <iostream>

using namespace std;

int main() {

  int x, n, aux;

  cin >> x;

  cin >> n; 

  for(int i = n; i < x; i = n){
    cin >> aux;
    n = n + aux;
  }
}
