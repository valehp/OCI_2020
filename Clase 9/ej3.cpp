#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector <int> v(n);
  for(int i=0; i<n; ++i){
    cin >> v[i];
  }
  if(n<2)cout << "el tamaño del vector es muy pequeño\n";
  else{
    int menor=v[0], segundomenor=v[1];
    for(int i=1; i<n; ++i){
      if(v[i]<menor){
        segundomenor=menor;
        menor=v[i];
      }
      else if(v[i]<segundomenor){
        segundomenor=v[i];
      }
    }
    cout << "menor: " << menor << "\nsegundo menor: " << segundomenor << "\n";
  }  
  return 0;
}