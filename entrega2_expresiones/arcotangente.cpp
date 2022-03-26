/**
  * @file arcotangente.cpp
  * @brief Expresi�n gen�rica incluyendo arco tangente de un racional (Ej. 1.19)
  *
  * @author Akram-Hamdouchi
  * @date Octubre-2021
  *
  * Escriba un programa C ++ que calcule el valor de la siguiente expresi�n:
  * 
  * (v�ase ejercicio 1.19)
  * 
  * Por ejemplo, para los valores a=1, b=2, c=3, e=4, p=5 y �ngulo =6 el resultado 
  * es 2.92803. Para resolver este ejercicio deber� buscar informaci�n sobre las 
  * funciones de biblioteca atan y atan2. Estudie sus diferencias y determine cu�l es
  * la adecuada en este caso.
  */

#include <iostream>
#include <cmath>
using namespace std;

int main (){
  const double PI= 3.14159265358;
  int a, b, c, e, p, dec, an;

  cout <<"Introduzca el valor a: ";
  cin >> a;

  cout <<"Introduzca el valor b: ";
  cin >> b;
  
  cout <<"Introduzca el valor c: ";
  cin >> c;

  cout <<"Introduzca el valor e: ";
  cin >> e;

  cout << "Introduzca el valor p: ";
  cin >> p;

  cout <<"Introduzca el valor del ángulo: ";
  cin >> dec;
  
  an =dec;// (dec*PI) / 180;

  double fi; 
  fi = atan2((c+pow(e,2)*b* pow(sin(an),3)),
       p-pow(e,2)*a*pow(cos(an),(3.0/5)));

  double final;
  final = fi;//(fi*180) / PI;
  cout << final;
  
}