#include <iostream>

using namespace std;

int main() {
	int n,k;
	cin >> n >> k;
	if(n<k)cout << "2\n";
	else {
		int t=(n*2)/k;
		if((n*2)%k)++t;
		cout << t << "\n";
	}	
  return 0;
}