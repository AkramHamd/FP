/**
  * @file leer_dos.cpp
  * @brief Programa para comprobar la lectura de dos valores enteros
  *
  * @author Akram-Hamdouchi
  * @date Noviembre-2021
  * 
  * Realice un programa que permita leer dos valores enteros, el primero negativo y el
  * segundo positivo. El programa debe repetir la lectura de cada uno de ellos hasta que se
  * cumpla la correspondiente condici�n.
  * 
  * En el primero valor, se debe usar un bucle do-while, mientras que en el segundo debe
  * usarse un bucle while. Como resultado final, el programa escribe los dos n�meros
  * introducidos.
  * 
  */

#include <iostream>
#include <cmath>
using namespace std;

int main () {
  int num1, num2;
  //Numero 1
  cout << "Escribe el primer valor (debe ser negativo): ";
  cin >> num1;
  do {
    cout << "Error, el número debe ser negativo. Vuelva a escribir: ";
    cin >> num1;
  } while (num1>=0);
  // Numero 2
  cout << "Escriba el segundo valor (debe ser positivo): ";
  cin >> num2;
  while (num2<=0) {
    cout << "Error, el número debe ser positivo. Vuelva a escribir: ";
    cin >> num2;
  }

//Salida

cout << "El primer número es: " << num1 << " y el segundo es: " << num2 << endl;
}

