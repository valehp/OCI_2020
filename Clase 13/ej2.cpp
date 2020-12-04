#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0 ; i<v.size() ; i++){
        cin >> v[i];
    }
    int k;
    cin >> k;

    sort(v.begin()+k, v.end());

    cout << "Nuevo vector: \n";

    for(int i=0; i<v.size() ; i++){
        cout << v[i] << " ";
    }
    cout << endl;
	
	return 0;
}	