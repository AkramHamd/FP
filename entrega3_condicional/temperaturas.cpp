/**
  * @file temparaturas.cpp
  * @brief Programa para transformar entre escalas de temperatura (Ej. 2.3)
  *
  * @author Fulanito...
  * @date Octubre-2021
  *
  * Escriba un programa que permita traducir entre grados Celsius (C), 
  * Fahrenheit (F), Kelvin (K) y Rankine (R). El programa preguntar� en qu� unidades damos 
  * la temperatura de entrada y a qu� escala queremos convertir. Para ello sabemos que:
  *       K = C + 273'15    R = F + 459'67   9 C = 5(F - 32)
  * Tenga en cuenta que el programa pregunta la temperatura y que �sta se introduce como un
  * n�mero seguido de dos letras que indican las unidades. Por ejemplo: 35CF indica que
  * queremos pasar 35 grados Celsius (C) a grados Fahrenheit (F). 
  * 
  * Importante: no se permite usar operadores l�gicos (&&, ||, !). Posiblemente la primera idea
  * que nos viene a la cabeza para resolver este problema es establecer las f�rmulas para
  * convertir de todas a todas las escalas. Esto nos da un total de 4x4=16 f�rmulas diferentes
  * (si tuvi�semos m�s escalas, la cantidad de f�rmulas aumenta r�pidamente). Esta
  * soluci�n, adem�s, necesitar�a el uso de condiciones compuestas (que usan operadores
  * l�gicos). Debe pensar en una soluci�n alternativa.
  * 
  */
#include <iostream>
using namespace std;

int main () {
  double x;
  double c, c2, c3;
  char ud1, ud2;
  cout << "Ingrese el número que desea convertir: ";
  cin >> x >> ud1 >> ud2;

//Conversión de todo a Celsius
  if (ud1 == 'C')
  {
     c = x;
  }


  if (ud1 == 'K')
  {
     c = x - 273.15;
  }


  if (ud1 == 'F')
  {
     c = ((x - 32)* 5.0)/9.0;
  }
 

  if ( ud1 == 'R')
  {
     c = (x - 491.67) * (5.0/9.0);
  }



  switch (ud2) {

    //Celsius n
    case 'C':
     cout << c << "C" << endl;
     break;

    //Celsius a Rankine
    case 'R':
     cout << ((c+273.15)*(1.0/8)) << "R" << endl;
     break;

    //Celsius a Farenheit
    case 'F':
     cout << (c*1.8)+32 << "F" << endl;
     break;
  // Celsius a Kelvin
    case 'K':
     cout << c + 273.15 << "K" << endl;
     break;
  
  }


}