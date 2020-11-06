#include <iostream>

using namespace std;

int main() {

  int x, sol = 1;

  cin >> x;

  for(int i = 1; i <= x; i++){
    sol = sol * i;
  }

  cout << sol << endl;
}