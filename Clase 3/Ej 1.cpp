#include <iostream>

using namespace std;

//Solución 1:
int main() {
  int a,b;
  cin >> a >> b;
  cout << a+b << "\n";
  return 0;
}

//Solución 2:
int main(){
  int a,b;
  cin >> a >> b;
  a=a+b;
  cout << a << "\n";
}

//Solución 3:
int main() {
  int a;
  int b;
  cin >> a >> b;
  int c;
  c=a+b;
  cout << c << "\n";
  return 0;
}

//Operadores Aritmeticos
//=(Asignación)
//+(Suma)
//-(Resta)
//*(Multiplicación)
// /(División) (División entera!)
//%(Modulo) (resto de la división entera)

//+=  a+=b <-> a=a+b;
//-=  a-=b <-> a=a-b;
//*=  a*=b <-> a=a*b;
//  /=  a/=b <-> a=a/b;
// %=  a%=b <-> a=a%b;

//++  a++ <-> ++a <-> a=a+1
//--  a-- <-> --a <-> a=a-1

//c++