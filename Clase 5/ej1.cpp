#include <iostream>
using namespace std;

int main() {
  int n=5,i=0;
  while(i<5){
    cout << "hola mundo!\n";
    ++i;//++i <-> i=i+1 <-> i++
  }
  cout << ":)\n";
  n=10;
  while(n){
    cout << "hola mundo!\n";
    --n;
  }  
  return 0;
}

//entero: verdadero
//menos 0 que es falso