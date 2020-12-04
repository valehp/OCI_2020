#include <bits/stdc++.h>

using namespace std;

int main() {
	int n=100000000;
	vector<int> v(n);
	for(int i=0; i<n; ++i){
		v[i]=i;
	}
	for(int i=0; i<n; ++i){
		if(v[i]==n-1)cout<<"lineal: "<< i << "\n";
    }	
	cout << "lowerbound: " << lower_bound(v.begin(),v.end(),n-1)-v.begin() << "\n";
	return 0;
}