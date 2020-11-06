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
  int m, cont=0;
  cin >> m;
  for(int i=0; i<n; ++i){
    if(m==v[i])++cont;
  }
  cout << cont << "\n";
  return 0;
}