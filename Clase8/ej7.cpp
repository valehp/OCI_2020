#include <iostream>
#include <vector>

using namespace std;

int main() {

  int n;
  cin>>n;
  vector<int> v(n);

  for(int i = 0; i < n; ++i){
    cin>>v[i];
  }

  int max_count = 0;
  int max_num = v[0];

  //Este primer for es para mantener la cuenta maxima
  for (int i=0; i<n; i++)
  {
    //por cada elemento del vector contamos las ocurrencias
    int count=1;

    //contamos cuantos v[i] se encuentran en el resto del vector
    for (int j=i+1;j<n;j++)
      if (v[i]==v[j]){
        //si es igual, sumamos a la cuenta actual
        count++;
      }
    if (count>max_count){
      //si la cuenta actual es mayor a la max, actualizamos
      max_count = count;
      max_num = v[i];
    }
  }

  cout<<"mas comun es: "<<max_num<<" y aparece "<<max_count<<" veces" <<endl;
}