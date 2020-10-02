#include <iostream>

using namespace std;

int main() {
  int a,b,c,d,aux;
  cin >> a >> b >> c >> d;
  if(a>b){
    aux=a;
    a=b;
    b=aux;
  }
  

  if(b>c){
    aux=b;
    b=c;
    c=aux;
    if(a>b){
      aux=b;
      b=a;
      a=aux;
    }
  }
  
  

  if(c>d){
    aux=c;
    c=d;
    d=aux;
    if(b>c){
      aux=b;
      b=c;
      c=aux;
      if(a>b){
        aux=b;
        b=a;
        a=aux;
      }
    }
  }
  
  cout << a << " " << b << " " << c << " " << d << "\n";
  return 0;
} 