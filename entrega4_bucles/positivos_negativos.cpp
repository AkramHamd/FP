/**
  * @file positivos_negativos.cpp
  * @brief Cuenta los n�meros positivos y negativos (lectura anticipada y centinela)
  *
  * @author Akram-Hamdouchi
  * @date Noviembre-2021
  * 
  * Se desea implementar un programa que cuente la cantidad de datos que son positivos y
  * negativos en una secuencia de valores enteros. Implemente un programa que lea datos hasta
  * que se lea el valor cero. Como resultado, indicar� en la salida est�ndar cu�ntos han sido
  * positivos y cu�ntos negativos.
  * 
  */
#include <iostream>
#include <cmath>
using namespace std;

int main () {
  int num, positivos=0 , negativos=0;

  while (num !=0)
  {
    cout << "Escriba un dato: ";
    cin >> num;

    if (num > 0) {
      positivos=positivos+1; 
    }
    if (num < 0) {
      negativos=negativos +1;
    }
  }
    cout << "El número de positivos es: " << positivos << endl;
    cout << "El número de negativos es: " << negativos << endl;
}