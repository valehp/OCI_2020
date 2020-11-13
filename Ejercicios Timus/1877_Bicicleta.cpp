#include <iostream>

using namespace std;

int main() {
	int clave1,clave2;
	cin >> clave1 >> clave2;
	if(!(clave1%2) || clave2%2)cout << "yes\n";
	else cout << "no\n";
  return 0;
}