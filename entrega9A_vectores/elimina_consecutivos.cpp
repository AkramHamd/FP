/**
  * @file elimina_consecutivos.cpp
  * @brief Elimina los repetidos consecutivos
  *
  * @author Akram Hamdouchi
  * @date Mes-A�o
  *
  * Escriba un programa C++ que procese una secuencia de enteros encabezada con 
  * la longitud para obtener una nueva secuencia sin repetidos consecutivos.
  * 
  * La nueva secuencia comienza con un n�mero de datos (como m�ximo, el n�mero 
  * de datos iniciales) seguido por cada uno de ellos de forma que los datos 
  * en posiciones i e i+1 son distintos (para cualquier i).
  * 
  * Note que puede haber repetidos, siempre que no sean consecutivos. Por ejemplo,
  * si introduce la secuencia:
  *    20   3 28 21 7 9 9 3 3 3 5 7 2 8 9  8 5 5 11 11 11
  *    14   3 28 21 7 9 3 5 7 2 8 9 8 5 11
  * 
  * donde la primera l�nea es la entrada y la segunda la salida.
  */
#include <iostream>
using namespace std;

const int MAX = 1000;

void Pide_vector(int Vin[MAX], int n)
{
  for (int i = 0; i < n; i++)
    cin >> Vin[i];
}

void Elimina_repetidos(int Vin[MAX], int &n)
{
  int j = 1;
  for (int i = 1; i < n; i++) {
    if (Vin[i] != Vin[i - 1]) {
      Vin[j] = Vin[i];
      j++;
    }
  }
  n = j;
}

void Escribe_vector(int v[MAX], int n)
{
  for (int i = 0; i < n; i++)
    cout << v[i] << " ";
}

int main()
{
  int n;
  int Vin[MAX];

  cin >> n;
  Pide_vector(Vin, n);
  Elimina_repetidos(Vin, n);
  cout << n << "   ";
  Escribe_vector(Vin, n);
}
