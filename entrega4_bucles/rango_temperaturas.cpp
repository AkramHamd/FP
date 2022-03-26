/**
  * @file rango_temperaturas.cpp
  * @brief Calcula el rango de temperaturas (m�nimo, m�ximo, lectura anticipada, centinela)
  *
  * @author Akram Hamdouchi
  * @date Noviembre-2021
  * 
  * Escriba un programa que lee una secuencia de valores de temperatura hasta que se 
  * introduce una temperatura menor que el cero absoluto (-273,15 grados cent�grados).
  * 
  * El programa debe escribir como resultado el intervalo m�nimo donde se sit�an el
  * conjunto de temperaturas.
  * 
  * Por ejemplo, si se introducen los siguientes valores:
  *      2.5 3 6 7.1 1 -300
  * El programa deber� escribir: [1,7.1]
  * 
  * Si se introducen los valores:
  *      -5 -4 -10 -2 -300
  * El programa deber� escribir: [-10,-2]
  * 
  * Si se introduce:
  *      -300
  * El programa deber� escribir: No hay datos
  * 
  */
 
#include <iostream>
#include <cmath>
using namespace std;

int main () {
  double valores;
  double min=1e20, max=-273.15;
  cout << "Introduce un valor: " ;
  cin >> valores;
  while (valores >= -273.15) {
    
    //Max y min
     if (valores > max) {
      max=valores;
    }
    if (valores < min ) {
      min = valores;
    } 
    cout << "Introduce un valor: " ;
    cin >> valores;
    
  } 
  //Salida
   //Insuficiencia de datos:
  if (min==1e20) {
    cout << "No hay datos" << endl;
  }
   //Intervalo
  if (max > -273.15 && max<1e20 && min>= -273.15 && min<1e20) 
  cout << "[" << min << ", " << max << "]" << endl;


}