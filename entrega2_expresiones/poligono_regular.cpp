/**
  * @file poligono_regular.cpp
  * @brief Medidas desde pol�gono regular (Ej. 1.21)
  *
  * @author Akram-Hamdouchi
  * @date Octubre-2021
  *
  * Escriba un programa C++ para el an�lisis de pol�gonos regulares. Tiene como
  * entradas la longitud del lado (a), y el n�mero de lados (k). Como salida 
  * deber� escribir en la salida est�ndar los siguientes valores:
  * 
  *   - El per�metro del pol�gono.
  *   - El �ngulo entre dos lados consecutivos.
  *   - El radio del c�rculo inscrito.
  *   - El radio del c�rculo circunscrito.
  *   - El �rea.
  * 
  * Las expresiones asociadas la puede consultar en el ejercicio 1.21.
  * 
  */

#include <iostream>
#include <cmath>

using namespace std;

int main () {
  const double PI= 3.14159265358;
  double a, k;
  cout << "Introduce la longitud del lado: ";
  cin >> a;
  cout << "Introduce el número de lados: ";
  cin >> k;

  //PERIMETRO
  double p;
  p= a*k;

  //GRADOS 
  double grados = ((180.0/k)*PI)/180.0;

  //ANGULO INTERIOR
  double ang;
  ang = ((k-2)/k)*180;

//RADIO CIRCULO INSCRITO
  double h, rins;
  rins = (0.5*a) * (1/tan(PI/k)); 

// Radio circunscrito 
  double rcir;
  rcir = (0.5*a) * ((1/sin(PI/k)));

// AREA 
  double area;
  area= k*pow(rins,2)*tan(PI/k);

//SALIDA
  cout << "El perímetro es: "<< p << endl;
  cout << "El ángulo entre lados es: "<< ang << endl;
  cout << "El radio del círculo inscrito es: "<< rins << endl;
  cout << "El radio del círculo circunscrito es: "<< rcir << endl;
  cout << "El área es: "<< area << endl;

}