/**
  * @file media_varianza.cpp
  * @brief Programa para calcular la media y varianza
  *
  * @author Akram Hamdouchi
  * @date Noviembre-2021
  *
  * Escriba un programa que lea un n�mero entero que indica el n�mero de datos
  * y a continuaci�n tantos n�meros reales como indique dicho entero. Como 
  * resultado, escribir� la media y la varianza de dichos datos.
  * 
  * Consulte la formulaci�n en el ejercicio 3.14 (Media y varianza)
  */

#include <iostream>
#include <cmath>
using namespace std;

int main () {
  int ndatos;
  double valor, media, varianza, suma=0, sumacuadrado=0;

  cout << "Indica el número de datos: ";
  cin >> ndatos;

  for (int i=0; i<ndatos; i++) {
    cout << "Escriba los datos: ";
    cin >> valor;
    suma = suma + valor;
    sumacuadrado = sumacuadrado + valor * valor;
  }

  
  //Salida
  media = suma / ndatos; 
  varianza = (sumacuadrado / ndatos) - pow (media,2);

  cout << "La media es: " << media << endl;
  cout << "La varianza es: " << varianza << endl;

}