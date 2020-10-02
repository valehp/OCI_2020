#include <iostream>

using namespace std;

int main() {
  int numero;
  cin >> numero;
  if(numero%2==0){
    cout << "2\n";
    if(numero%4==0){
      cout << "4\n";
      if(numero%8==0){
        cout << "8\n";
      }  
    }
    if(numero%6==0){
      cout << "6\n";
    }
  }
  if(numero%3==0){
    cout << "3\n";
    if(numero%9==0){
      cout << "9\n";
    }
  }  
  if(numero%5==0){
    cout << "5\n";
    if(numero%10==0){
      cout << "10\n";
    }
  }
  if(numero%7==0){
    cout << "7\n";
  } 
  return 0;
}