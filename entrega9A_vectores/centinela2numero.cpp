/**
  * @file centinela2numero.cpp
  * @brief Programa para transformar secuencia con centinela a secuencia con n�mero de datos
  *
  * @author Akram Hamdouchi
  * @date Mes-A�o
  * 
  * Escriba un programa que transforme una secuencia de longitud indeterminada marcada con 
  * un centinela a una secuencia que comienza con el n�mero de datos y sigue con los mismos 
  * valores pero sin centinela.
  * 
  * El programa lee una secuencia de valores reales hasta que se introduce un valor negativo.
  * 
  * Una vez cargada la secuencia, deber� escribirla en el mismo orden pero encabezada con el
  * n�mero de datos y sin centinela.
  * 
  * Un ejemplo de ejecuci�n donde hay 2 datos es:
  *     2.5 3.2 -1
  *     2 2.5 3.2
  * 
  * Otro ejemplo, con una secuencia vac�a:
  *     -1
  *     0
  */
#include <iostream>
using namespace std;

int main()
{
  double valor;
  int contador = 0;
  const int MAX_VALOR = 1000;
  double valores[MAX_VALOR];

  cin >> valor;
  while (valor >= 0) {
    valores[contador] = valor;
    contador++;
    cin >> valor;
  }
  cout << contador << "  ";
  for (int i = 0; i < contador; i++) 
    cout << valores[i] << " ";
}