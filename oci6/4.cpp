#include <iostream>

using namespace std;

int main() {

  int x;

  cin >> x;

  for(int i = x; i >= 0; i = i - 3){
    cout << i << endl;
  }
}