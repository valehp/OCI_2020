#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i=0; i<n; ++i){
		cin >> v[i];
	}
	sort(v.begin(),v.end());
	int x;
	cin >> x;
	int a=lower_bound(v.begin(), v.end(), x)-v.begin();
	int b=upper_bound(v.begin(), v.end(), x)-v.begin();
	cout << b-a << "\n";
	return 0;
}	