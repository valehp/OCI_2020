#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n,k;
  cin >> n >> k;
  vector<int> v(n);
  for(int i=0; i<n; ++i){
	  cin >> v[i];
  }
  int booms=0,droids=0,diferencia;
  for(int i=0; i<n; ++i){
	  diferencia=k-v[i];
	  if(diferencia>0)droids+=diferencia;
	  else if(diferencia<0)booms+=(diferencia*-1);
  }
  cout << booms << " " << droids << "\n";
  return 0;
}