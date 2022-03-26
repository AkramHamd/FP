/**
  * @file numero_capicua.cpp
  * @brief Determina si un n�mero entero es capic�a mediante c�lculos num�ricos
  *
  * @author Fulanito...
  * @date Noviembre-2021
  * 
  * Escriba un programa para determinar si un n�mero positivo es capic�a. Para ello, 
  * deber� incluir tres funciones:
  * 
  *  - Una funci�n que pide repetidamente un n�mero hasta que sea positivo.
  *  - Una funci�n que recibe un entero positivo y devuelve el n�mero resultante tras
  *    invertir el orden de los d�gitos. Por ejemplo, si recibe el 123, deber� devolver 
  *    el entero 321. Note que deber� trabajar con el tipo int, es decir, lo debe 
  *    resolver mediante c�lculos num�ricos.
  *  - Una funci�n que recibe un entero y devuelve si es capic�a. Si el entero es no 
  *    positivo, se considera no capic�a. Si es entero, deber� compararlo con el n�mero
  *    que resulta de dar la vuelta a los d�gitos.
  * 
  * Por ejemplo, una ejecuci�n podr�a ser la siguiente:
  *    Introduzca un entero: -3
  *    El entero debe ser positivo, introduzca otro: 18
  *    El n�mero 18 no es capic�a.
  * 
  * Otro ejemplo, con un n�mero capic�a puede ser:
  *    Introduzca un entero: 123454321
  *    El n�mero 123454321 es capic�a.
  * 
  */

#include <iostream>
using namespace std;

int Pide_positivo () {
  int num;
  cout << "Introduzca un entero positivo: ";
  cin >> num;
  while (num<0) {
    cout << "El entero debe ser positivo, inténtelo de nuevo: ";
    cin >> num;
  }
  return num;
}

int Invertido (int num) {
  {
 int inv=0;
 while(num>0)
 {
  inv=inv * 10 + (num % 10);
  num = num / 10;
 }
 return inv;
 }
}

int Capicua (int num1, int num2) {
  bool capi=false;
  if (num1==num2) {
    capi=true;
  }
  else if (num1!=num2) {
    capi = false;
  }
  return capi;
  
}

int main () {
  int num1, num2;
  cout << "Introduzca un entero: ";
  num1 = Pide_positivo ();
  num2 = Invertido (num1);
  if (Capicua(num1,num2) == false) {
    cout << "El número " << num1 << " no es capicua." << endl;
  }
  
  if (Capicua (num1,num2)==true) {
    cout << "El número " << num1 << " es capicua." << endl;
  }
    
  

}