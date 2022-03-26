/**
  * @file calculadora.cpp
  * @brief Programa para realizar una operaci�n simple entre dos n�meros (Ej. 2.18)
  *
  * @author Akram-Hamdouchi
  * @date Octubre-2021
  *
  * Escriba un programa que haga las funciones de una calculadora b�sica: suma,
  * resta, multiplicaci�n y divisi�n. Para ello, el programa debe leer dos n�meros 
  * enteros y un car�cter que indique la operaci�na realizar (+, -, *, /), mostrando 
  * el resultado a continuaci�n. Por ejemplo, ante esta entrada:
  *       34 12 +
  * el programa mostrar� esta salida:
  *        46
  */
#include <iostream>
using namespace std;

 int main () {
  float x, y;
  char oper;
  cout << "CALCULADORA: Use +, -, *, /" << endl;
  cout << "Ingrese el primer número: ";
  cin >> x;
  cout << "Ingrese el segundo número: ";
  cin >> y;
  cout << "Ingrese el tipo de operación: ";
  cin >> oper;

  switch(oper)
    {
        case '+':
            cout << (x + y);
            break;
        case '-':
            cout << x - y;
            break;
        case '*':
            cout << (x * y);
            break;
        case '/':
            cout << x / y;
            break;
       
    }

 }