/**
  * @file gaussiana.cpp
  * @brief C�lculo del valor de una gaussiana (Ej. 1.20)
  *
  * @author Akram-Hamdouchi
  * @date Octubre-2021
  *
  * La expresi�n que define una funci�n gaussiana es la siguiente:
  * 
  * (v�ase ejercicio 1.20)
  * 
  * Con valores 1, 2, 3, el resultado es gaussiana(3)= 0.120985
  */

#include <iostream>
#include <cmath>
using namespace std;

int main () {
  const double PI= 3.14159265358;
  const double E= 2.71828182844590452;
  double m, d, x, f;

  cout << "Escriba la media: ";
  cin >> m;

  cout << "Escribe la desviación típica: ";
  cin >> d;

  cout << "Escriba la abscisa: ";
  cin >> x;

  f = (1/(d*sqrt(2*PI))) *
      pow(E, (-1.0/2) * pow (((x-m)/d),2 ));

  cout << f;
}