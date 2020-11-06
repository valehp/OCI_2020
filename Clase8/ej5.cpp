#include <iostream>
#include <vector>

using namespace std;

int main() {

  //Escriba un programa que lea un entero n y cree un vector con este tamaño. Después lea los n números, guárdelos en el vector. 
  

  //Recorra el vector, si se encuentra en una posición par, debe sumar el valor en esa posición (entiéndase por valor, la posición en la que se encuentra), en cambio si se encuentra  en una posición impar, debe multiplicar ese valor. Para terminar debe imprimir el resultado total.
  cout<<"Ingresa tamano del vector"<<endl;

  int n;
  cin>>n;
  vector <int> valores(n);

  cout<<"Ingresa los valores que contiene el vector"<<endl;
  for (int i = 0; i < n ; ++i){
    cin>>valores[i]; 
  }

  //usar for para mostrar todos los valores
  for (int i = 0; i < n ; ++i){
    //3 4 2
    //3+0 4*1 2+2
    if((i % 2) == 0){
      //Es par
      valores[i] = valores[i] + i;
    }
    else{
      valores[i] = valores[i] * i;
    }
  }

  for (int i = 0; i < n ; ++i){
    cout<<valores[i]<<" "; 
  }
  
  
  cout<<endl;
}
