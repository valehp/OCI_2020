#include <iostream>
#include <vector>

using namespace std;

int main() {
	int k,n;
	cin >> k >> n;
	int aux, autos=0;
	for(int i=0; i<n; ++i){
		cin >> aux;
		autos += aux;
		autos -= k;
		if(autos<0)autos=0;
	}
	cout << autos << "\n";
  	return 0;
}