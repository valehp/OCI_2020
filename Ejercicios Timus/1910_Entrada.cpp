#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for(int i=0; i<n; ++i){
	  cin >> v[i];
  }
  int suma=v[0]+v[1]+v[2];
  int mayor = suma, posmayor=0;;
  for(int i=3; i<n; ++i){
	  suma+=v[i];
	  suma-=v[i-3];
	  if(mayor<suma){
		mayor=suma;
		posmayor=i-2;
	  }	
  }
  cout << mayor << " " << posmayor+2 << "\n";
  return 0;
}