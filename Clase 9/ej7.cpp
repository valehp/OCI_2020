#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for(int i=0; i<n; ++i){
    cin >> v[i];
  }
  sort(v.begin(),v.end());
  for(int i=0; i<n; ++i){
    cout << v[i] << " ";
  }
  cout << "\n";
  int mediana;
  //n=v.size();
  if(v.size()%2)mediana=v[n/2];
  else mediana=(v[n/2]+v[(n/2)-1])/2;
  cout << "mediana: " << mediana << "\n";
  return 0;
}
