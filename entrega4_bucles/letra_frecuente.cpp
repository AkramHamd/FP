/**
  * @file letra_frecuente.cpp
  * @brief Programa para determinar la letra m�s frecuente
  *
  * @author Akram Hamdouchi
  * @date Noviembre-2021
  * 
  * Suponga que se ha procesado un texto y se han obtenido las frecuencias con las que 
  * aparecen cada una de las letras. Escriba un programa que lee pares de valores letra y
  * frecuencia y escribe como resultado la letra m�s frecuente. El programa lee un n�mero
  * indeterminado de pares delimitado con un car�cter centinela #. 
  * Un ejemplo de ejecuci�n es:
  *      Introduzca frecuencias:
  *      a 45
  *      c 32
  *      Z 39
  *      h 25
  *      #
  *      La letra m�s frecuente es 'a' con 45 repeticiones.
  * 
  */

#include <iostream>
using namespace std;

int main () {
  int max, frec;
  char let, res;
  max=0;
  res=0;

  while (let!=35) {

    cout << "Introduce una letra y su frecuencia " << endl;
    cin >> let;
    if (let!=35) {
      cin >> frec;
      }

    if (frec>max) {
      max=frec;
      res=let;
    }
  }

  cout << "La letra más frecuente es: " << res << " con " << max << " repeticiones." << endl;
}
