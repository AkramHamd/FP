/**
  * @file menu_calculadora.cpp
  * @brief Men� para realizar operaciones b�sicas de calculadora
  *
  * @author Akram-Hamdouchi
  * @date Noviembre-2021
  * 
  * Escriba un programa que lea dos valores reales y que presente un men� con siete
  * alternativas: 
  *    1. Suma
  *    2. Resta
  *    3. Producto
  *    4. Divisi�n
  *    5. Modificar primer operando
  *    6. Modificar segundo operando
  *    7. finalizar el programa
  * 
  * El programa deber� pedir al usuario que seleccione una de las opciones y presentar en la
  * salida est�ndar el resultado de la operaci�n correspondiente. 
  * 
  * Tenga en cuenta que el usuario puede responder a la selecci�n tambi�n con cualquiera de los * cuatro operadores + - * / para seleccionar alguna de las 4 opciones.
  * 
  * Para ello, tenga en cuenta que el valor inicial de los operandos es cero, y que la soluci�n
  * debe contener un bucle do-while junto con una instrucci�n switch para gestionar el men�.
  * 
  */
#include <iostream>
#include <cmath>
using namespace std;

int main (){
  int orden;
  double resultado, num1, num2;
  num1 = 0;
  num2 = 0;
  do {
    cout << "CALCULADORA" << endl;
    cout << endl;
    cout << "1. Suma." << endl;
    cout << "2. Resta." << endl;
    cout << "3. Producto" << endl;
    cout << "4. División. " << endl;
    cout << "5. Modificar primer operando." << endl;
    cout << "6. Modificar segundo operando. " << endl;
    cout << "7. Finalizar el programa. " << endl;
    cout << endl;
    cout << "Por favor elija una opción: "; 
    cin >> orden;
    switch (orden)
    {
      case 1: 
      resultado= num1 + num2;
      cout << "El resultado es: " << resultado << endl;
      break;

      case 2:
      resultado = num1 - num2;
      cout << "El resultado es: " << resultado << endl;
      break;

      case 3:
      resultado = num1 * num2;
      cout << "El resultado es: " << resultado << endl;
      break;

      case 4: 
      resultado = num1 / num2;
      cout << "El resultado es: " << resultado << endl;
      break;

      case 5:
      cout << "Por favor, escriba el valor para el primer operando: ";
      cin >> num1;
      break;

      case 6:
      cout << "Por favor, escriba el valor para el segundo operando: ";
      cin >> num2;
      break;
    }
  } while (orden >= 1 && orden <= 6);
  if (orden == 7) {
    cout << "Programa finalizado." << endl;
  }
  else {
    cout << "Error. Vuelva a ejecutar el programa y elija la opción correcta." << endl;
  }

}