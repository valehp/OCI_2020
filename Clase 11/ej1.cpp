#include <iostream>
#include <vector>

using namespace std;

int main() {
  //crear una matriz:
  int n,m;
  cin >> n >> m;
  vector<vector<int> > v(n,vector<int>(m));
 
  //recorrer la matriz:
  for(int i=0; i<n; ++i){
	  for(int j=0; j<m; ++j){
		  cin >> v[i][j];
	  }
  }
  for(int i=0; i<n; ++i){
	  for(int j=0; j<m; ++j){
		  cout << v[i][j] << " ";
	  }
	  cout << "\n";
  }

  return 0;
}