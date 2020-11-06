#include <iostream>

using namespace std;

int main() {

  int n, sol = 0, aux;

  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> aux;
    sol = sol + aux;
  }

  cout << sol << endl;
}