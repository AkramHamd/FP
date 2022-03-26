/**
  * @file mediana.cpp
  * @brief Programa para calcular la mediana de una secuencia de valores
  *
  * @author Akram Hamdouchi
  * @date Mes-A�o
  * 
  * Escriba un programa que procese una secuencia de datos encabezada con 
  * la longitud para obtener el valor de la mediana. 
  * 
  * Recuerde que la mediana es el valor que se sit�a en el centro cuando 
  * los datos est�n ordenados. En caso de que haya un n�mero par de datos, 
  * puede seleccionar cualquiera de los dos centrales.
  * 
  * Un ejemplo de ejecuci�n es:
  *     9   6.1  1.5  2  1.9  2.6  6  2.1  2.2  4   
  *     Mediana de 9 valores: 2.2
  * 
  * donde la primera l�nea es la entrada del programa y la segunda el resultado.
  */
#include <iostream>
using namespace std;

void Pide_vector(double v[100], const int p) 
{
  for (int i = 0; i < p; i++) {
    cin >> v[i];
  }
}

void Ordena_Vector(double v_or[100], const int TAM) 
{
  double aux;
  for (int i = 0; i < TAM; i++) {
    for (int j = 0; j < TAM - 1; j++) {
      if (v_or[j] > v_or[j + 1]) {
        aux = v_or[j];
        v_or[j] = v_or[j + 1];
        v_or[j + 1] = aux;
      }
    }
  }
}

int main() 
{
  const int MAX = 100;
  int n;
  double valor, total = 0, sumacuadrado = 0;
  double valores[MAX];

  cin >> n;
  Pide_vector(valores, n);
  Ordena_Vector(valores, n);
  for (int i=0; i<n; i++)
    cout << valores [i] << " ";
  //cout << "Mediana de " << n << " valores: " << valores[n / 2];
}