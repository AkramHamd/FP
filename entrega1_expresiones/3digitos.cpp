/**
  * @file 3digitos.cpp
  * @brief Operar con d�gitos enteros (Ej. 1.13)
  *
  * @author Akram_Hamdouchi
  * @date 29-Septiembre-2021
  *
  * Escriba un programa C++ que lea en una variable de tipo int un valor entero de 3 
  * d�gitos (podemos suponer que el usuario escribir� sin equivocarse un n�mero 
  * de 3 d�gitos). A continuaci�n el programa mostrar� los 3 d�gitos del n�mero: uno 
  * en cada l�nea.
  * 
  */

#include <iostream>
using namespace std;

int main () {
  int entero;
  cout << "Introduzca un número entero: ";
  cin >> entero;

  double n1, n2, n3;
  n3 = (entero)%10;
  n2 = (entero/10)%10;
  n1 = (entero/100)%10;

  cout << n1 << endl;
  cout << n2 << endl;
  cout << n3 << endl;

}