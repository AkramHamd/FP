/**
  * @file menu_circunferencia.cpp
  * @brief Men� para calcular datos sobre una circunferencia (Ej. 3.2)
  *
  * @author Akram-Hamdouchi
  * @date Noviembre-2021
  * 
  * Realice un programa que permita realizar algunos c�lculos sobre una circunferencia. 
  * En concreto calcular� el �rea del c�rculo y el per�metro correspondiente. El programa
  * presentar� un men� de opciones al usuario como el siguiente:
  *    1. Cambiar el valor del radio
  *    2. Mostrar el valor del radio
  *    3. Calcular el �rea del c�rculo
  *    4. Calcular el per�metro de la circunferencia
  *    5. Finalizar el programa
  * 
  * Al comienzo, el radio de la circunferencia se inicializar� a 1. La estructura del 
  * programa consistir� en un bucle de tipo do?while cuyo cuerpo consistir� en presentar el
  * men�, leer una opci�n desde la entrada est�ndar y finalmente ejecutar y mostrar el
  * resultado de la acci�n seleccionada mediante una estructura de bifurcaci�n switch.
  * 
  */
#include <iostream>
#include <cmath>
using namespace std;

int main () {
  int orden;
  double radio, area, perimetro;
  radio = 1;
  const double PI= 3.14159265358;


do {
  cout << "Calculadora circunferencia, por favor elija una opción: " << endl;
  cout << " 1. Cambiar el valor del radio " << endl;
  cout << " 2. Mostrar el valor del radio " << endl;
  cout << " 3. Calcular el área del círculo " << endl;
  cout << " 4. Calcular el perímetro de la circunferencia " << endl;
  cout << " 5. Finalizar el programa  " << endl;
  cout << endl;
  cout << "Debe elegir una opción entre el 1 y el 5: ";
  cin >> orden;
  switch (orden)
{
  case 1:
  cout << "Escriba un nuevo valor para el radio: ";
  cin >> radio;
  cout << endl;
  break;

  case 2:
  cout << "El valor del radio es: " << radio << endl;
  cout << endl;
  break;

  case 3:
  area = PI * pow(radio,2);
  cout << "El área es: " << area << endl;
  cout << endl;
  break;

  case 4:
  perimetro = 2 * PI * radio;
  cout << "El radio es: " << perimetro << endl;
  cout << endl;
  break;

}

} while (orden >= 1 && orden <= 4);
if (orden == 5 ) {
  cout << "Programa finalizado." << endl;
}
else {
  cout << "Error. Vuelva a ejecutar el programa y elija la opción correcta." << endl;
}
}
