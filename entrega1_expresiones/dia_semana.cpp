/**
  * @file dia_semana.cpp
  * @brief C�lculo del d�a de la semana (Ej. 1.15)
  *
  * @author Akram-Hamdouchi
  * @date 29-Septiembre-2021
  *
  * Escriba un programa C++ que primero lea el d�a de la semana como un entero
  * de 0 (lunes) a 6 (domingo), a continuaci�n un n�mero de d�as que pasar�n y
  * finalmente escriba el d�a de la semana que resultar�. 
  * 
  * Por ejemplo, si estamos en mi�rcoles lee 2, si decimos que pasan 8 d�as 
  * escribir� 3 (que corresponde al jueves).
  * 
  */

#include <iostream> 
using namespace std;

int main () {
  int day;
  cout << "Dime que día es: " ;
  cin >> day;
  cout << "¿Cuántos días quieres que pasen? ";
  int pasan;
  cin >> pasan;

  int final;
  final = (day + pasan) % 7;

  cout << "El día es: " << final << endl;
  return 0;

}