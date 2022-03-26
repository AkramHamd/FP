/**
  * @file primos_relativos.cpp
  * @brief Determina si dos n�meros enteros positivos son primos relativos
  *
  * @author Akram Hamdouchi
  * @date Noviembre-2021
  * 
  * Escriba un programa que lee dos n�meros enteros positivos y escribe en la 
  * salida est�ndar si son primos relativos. Deber� incluir las funciones:
  *  - Una funci�n que pide repetidamente un n�mero hasta que sea positivo.
  *  - Una funci�n que recibe dos enteros positivos y determina su m�ximo
  *    com�n divisor. Use el algoritmo de Euclides.
  * 
  * Un ejemplo de ejecuci�n es:
  *    Introduzca un entero positivo: -3
  *    El entero debe ser positivo, int�ntelo de nuevo: 18
  *    Introduzca un entero positivo: 11
  *    Los n�meros 18 y 11 son primos relativos.
  * 
  * Otro ejemplo puede ser el siguiente:
  *    Introduzca un entero positivo: 14
  *    Introduzca un entero positivo: 22
  *    Los n�meros 14 y 22 no son primos relativos. Su MCD es: 2
  * 
  * Observe que en caso de que no sean primos relativos, la salida tambi�n
  * informa del m�ximo com�n divisor.
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

 int MCD(int num1, int num2) {
  int resultado;
    if(num2 == 0) return num1;
    resultado = MCD(num2, num1%num2); 
    return resultado; 
} 

int main () {
  int num1, num2, mcd;

  num1 = Pide_positivo ();
  num2 = Pide_positivo();
  mcd = MCD (num1,num2);

  if (mcd == 1) {
    cout << "Los números " << num1 << " y " << num2 << " son primos relativos y su máximo común divisor es: " << mcd;
  }
  
  else {
    cout << "Los números " << num1 << " y " << num2 << " NO son primos relativos y su máximo común divisor es: " << mcd;
  }

  
}