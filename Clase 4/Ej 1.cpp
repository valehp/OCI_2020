#include <iostream>

using namespace std;

int main() {
  int numero;
  cin >> numero;
  if(numero>10)cout << "SI\n";
  
  if(numero<10){
    cout << "NO\n";
  }
  
  return 0;
}

//0: falso
//todos los otros numeros: verdadero

//Operadores Lógicos:
//or (a o b (cuando son ambos tambien es verdadero!))
//and (a y b)
//not (no a)
//a or b  <-> a || b
//a and b <-> a && b
//not a <-> !a

//xor <-> (a and (not b)) or (b and (not a)



//Operadores relacionales
//== (a igual b)
//<= (menor o igual)
//>= (mayor o igual)
//< (menor)
//> (mayor)
//!= (no igual)

//Swap
  /*aux=a;
  a=b;
  b=aux;*/