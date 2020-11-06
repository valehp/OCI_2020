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
  for(int i=0; i<n-1; ++i){
    int menor=v[i],posmenor=i;
    for(int j=i+1; j<n; ++j){
      if(v[j]<menor){
        menor=v[j];
        posmenor=j;
      }  
    }
    //swap
    int aux=v[i];
    v[i]=menor;
    v[posmenor]=aux;
  }
  for(int i=0; i<n; ++i){
    cout << v[i] << " ";
  }
  cout << "\n";
  return 0;
}