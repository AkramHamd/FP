/**
  * @file contar_vocales.cpp
  * @brief Cuenta el n�mero de Vocales de un texto
  *
  * @author Fulanito...
  * @date Noviembre-2021
  * 
  * Escriba un programa que cuenta el n�mero de Vocales que contiene un texto. La
  * entrada del programa consiste en un texto que termina con el car�cter 
  * delimitador '#' (tambi�n llamado centinela).
  * 
  * Un ejemplo de ejecuci�n es:
  *    Esto es una prueba con
  *    un texto que finaliza con un centinela.#
  *    El n�mero de Vocales es: 20.
  *
  * Para resolver el problema, debe incluir una funci�n que recibe un car�cter y
  * devuelve si es una vocal.
  * 
  */

#include <iostream>
using namespace std;

bool Vocales (char letra) {
  bool voc;

  if (letra == 'a' || letra == 'e' || letra=='i' || letra == 'o' || letra=='u'||
  letra=='A' || letra=='E' || letra=='I' || letra=='O' || letra=='U') {
  voc=true;
  }
  return voc;
}

int main () {
  char texto, letra;
  int vocales=0;

  cout << "Introduzca el texto: " ;
  cin >> texto;
  while (texto != '#') {
    if (Vocales (texto) == true ) {
    vocales= vocales +1; }
    cin >> texto;
  }
 cout << "El numero de Vocales es: " << vocales << endl;
}

