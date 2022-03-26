/**
  * @file lectura_anticipada.cpp
  * @brief Programa para comprobar la lectura de dos valores enteros
  *
  * @author Akram-Hamdouchi
  * @date Noviembre-2021
  * 
  * Realice un programa que permita leer un n�mero real en el intervalo [0,1]. El programa
  * debe dise�arse mediante una lectura anticipada, es decir, una lectura para el primer dato
  * y un bucle que implementa la repetici�n de la lectura hasta que el valor sea correcto.
  * 
  * Tenga en cuenta que dado que el primer dato se lee aparte, el mensaje para introducirlo
  * indicar� el intervalo v�lido, mientras que en las siguientes entradas podemos usar un
  * mensaje que avisa de que el valor anterior no es v�lido.
  * 
  * Como resultado final, el programa debe escribir el dato introducido.
  * 
  */

#include <iostream>
#include <cmath>
using namespace std;

int main () {
  int num;
  cout << "Introduzca un número real en el intervalo [0,1]: ";
  cin >> num;
  while (num < 0 || num > 1) {
    cout << "Error. El intervalo no es válido. vuelva a introducir el valor: ";
    cin >> num;
  }

  //Salida
  cout << "El número es: " << num << endl;
}