#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,k;
	cin >> n;
	vector<int> v(n);
	for(int i=0; i<n; ++i){
		cin >> v[i];
	}
	sort(v.begin(),v.end());
	cin >> k;
	int cont=1;
	int kmayor=v[n-1];
	if(k==1)cout << kmayor << "\n";
	else{
		for(int i=n-2; i>=0; --i){
			if(v[i]!=kmayor){
				kmayor=v[i];
				++cont;
			}
			if(k==cont){
				cout << kmayor << "\n";
				break;
			}
		}
	}	
	return 0;
}	