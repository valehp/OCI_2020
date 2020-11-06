#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v;
  int numero;
  cin >> numero;
  while(numero!=0){
    v.push_back(numero);
    cin >> numero;
  }
  v.push_back(numero);
  for(int i=0; i<v.size(); ++i){
    cout << v[i] << " ";
  }
  cout << "\n" << v.size() <<"\n";
  return 0;
}