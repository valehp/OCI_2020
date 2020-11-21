#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<int> > v(n,vector<int>(n));
  for(int i=0; i<n; ++i){
	  for(int j=0; j<n; ++j){
		  cin >> v[i][j];
	  }
  }  
  for(int i=0; i<n; ++i){
	  for(int j=0; j<n; ++j){
	  	if(i==j || n-1-i==j)cout << v[i][j] << " ";
	  }
  }
  cout << "\n";
  return 0;
}