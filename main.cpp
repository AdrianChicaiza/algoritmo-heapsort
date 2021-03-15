#include <iostream>
#include <fstream>
#include "heapsort.h"
using namespace std;
using namespace Heapsort;
int main() {
  ofstream archivo;
  archivo.open("heapsort.txt",ios::app);
  int A[100],n;
  archivo<<"Algoritmos de ordenamiento HeapSort"<<endl;
  cout<<"Ingrese la cantidad de elemtos del arreglo:  ";
  cin>>n;
  archivo<<"Cantidad de elementos:  "<<n<<endl;
  archivo<<"Arreglo original:  ";
  for (int i=1;i<=n;i++)
  {
      cout<<"> ";
      cin>>A[i];
  }
  for (int i=1;i<=n;i++)
  {
  
    cout<<"|"<<A[i]<<"|";
    archivo<<"|"<<A[i]<<"|";

  }
  archivo<<endl;
  cout<<endl;

    HeapSort(A, n);
    archivo<<"Arreglo ordenado:  ";
    cout<<"El orden es:  ";
  for (int i=1;i<=n;i++)
  {
  cout<<"|"<<A[i]<<"|";
  archivo<<"|"<<A[i]<<"|";
  }
archivo<<endl;
archivo.close();
}



