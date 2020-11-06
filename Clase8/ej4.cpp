#include <iostream>
#include <vector>

using namespace std;

int main() {

  cout<<"Ingresa tamano del vector"<<endl;

  int n;
  cin>>n;
  vector <int> valores(n);

  cout<<"Ingresa los valores que contiene el vector"<<endl;
  for (int i = 0; i < n ; ++i){
    cin>>valores[i]; 
  }

  //usar for para mostrar todos los valores
  int indice = 0;
  for (int i = 0; i < n ; ++i){
    indice = n - i - 1;
    cout<<valores[indice]<<" "; 
  }
  
  cout<<endl;
}
