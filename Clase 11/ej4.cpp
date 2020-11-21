#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n,m;
  cin >> n >> m;
  vector<vector<int> > v(n,vector<int>(m));
 
  for(int i=0; i<n; ++i){
	  for(int j=0; j<m; ++j){
		  cin >> v[i][j];
	  }
  }
  for(int j=m-1; j>=0; --j){
	  for(int i=n-1; i>=0; --i){
		  cout << v[i][j] << " ";
	  }
  }
  cout << "\n";
  return 0;
}