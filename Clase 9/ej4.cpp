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
  int m;
  cin >> m;
  for(int i=0; i<n; ++i){
    if(m==v[i])cout << i << " ";
  }
  cout << "\n";
  return 0;
}