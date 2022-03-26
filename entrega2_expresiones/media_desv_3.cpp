/**
  * @file media_desv_3.cpp
  * @brief Programa para calcular media y desviaci�n con 3 valores (Ej. 1.17)
  *
  * @author Akram-Hamdouchi
  * @date Octubre-2021
  *
  * Lectura de tres valores desde el teclado y salida de dos valores: 
  * la media aritm�tica y la desviaci�n est�ndar. Las expresiones son las siguientes:
  * 
  *  (v�ase ejercicio 1.17)
  */

#include <iostream>
#include <cmath>
using namespace std;

int main () {

  double n1, n2, n3;
  cout << "Ingresa el valor 1: ";
  cin >> n1;
  cout << "Ingresa el valor 2: ";
  cin >> n2;
  cout << "Ingresa el valor 3: ";
  cin >> n3;
//MEDIA
  double media;
  media = (n1+n2+n3)/3;


//DESVIACIÓN

  double desv;
  desv = sqrt((pow((n1-media),2) + pow((n2-media),2) + pow((n3-media),2))/3);


  cout << "La media aritmética es: " << media << " y la desviación típica es: " << desv;

}