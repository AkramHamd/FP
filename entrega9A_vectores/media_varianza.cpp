/**
  * @file media_varianza.cpp
  * @brief Programa para calcular la media y varianza de una secuencia de valores
  *
  * @author Akram Hamdouchi
  * @date Mes-A�o
  * 
  * Escriba un programa que procese una secuencia de datos encabezada con 
  * la longitud para obtener el valor de la media y la varianza. 
  * 
  * La entrada por tanto ser� un valor n de tipo entero seguido por los n valores
  * reales que procesar. El resultado, por tanto, ser� la media y varianza de 
  * esos n datos. 
  * 
  * Las f�rmula que se utilizar� para la varianza es la que calcula la media de 
  * las diferencias al cuadrado. El programa, por tanto, consiste en:
  *    -# Cargas los datos en un vector.
  *    -# Calcular la media.
  *    -# Calcular la varianza aprovechando que tenemos la media.
  * 
  * Un ejemplo de ejecuci�n es:
  *     9   6.1  1.5  2  1.9  2.6  6  2.1  2.2  4   
  *    Media: 3.15556
  *    Varianza: 2.82914
  * 
  * donde la primera l�nea es la entrada del programa y el resto el resultado.
  * 
  */
#include <iostream>
using namespace std;

int main()
{
  const int MAX = 1000;
  int n;
  double valor, total = 0, sumacuadrado = 0;
  double valores[MAX];

  cout << "Introduzca el número de datos y los valores: ";
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> valores[i];

  for (int i = 0; i < n; i++) {
    // Sumar el número actual a la sumatoria
    total = total + valores[i];
    sumacuadrado = sumacuadrado + (valores[i] * valores[i]);
  }
  cout << "Media: " << total / n << endl;
  cout << "Varianza: " << (sumacuadrado / n) - ((total / n) * (total / n));

  return 0;
}