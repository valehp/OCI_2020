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
  int cont=0,i=0,j=0,k=0;
  while(cont<n*m){
	 for(;j<m-k;++j){
		cout << v[i][j] << " ";
		++cont;
	 }
	 --j;
	 ++i;
	 for(;i<n-k;++i){
		cout << v[i][j] << " ";
		++cont;
	 }
	 --i;
	 --j;
	 for(;j>=k;--j){
		cerr << v[i][j] << " ";
		++cont;
	 }
	 ++j;
	 --i;
	 ++k;
	 for(;i>=k;--i){
		cerr << v[i][j] << " ";
		++cont;
	 }
	 ++i;
	 ++j;
  }
  
  cout << "\n";
  return 0;
}