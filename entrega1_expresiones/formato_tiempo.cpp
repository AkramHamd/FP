/**
  * @file formato_tiempo.cpp
  * @brief Segundos a formato legible (Ej. 1.14)
  *
  * @author Akram-Hamdouchi
  * @date 29-Septiembre-2021
  *
  * Escriba un programa C++ que lea un entero, correspondiente a una cantidad de 
  * segundos, y escriba en la salida est�ndar el n�mero de d�as, horas, minutos
  * y segundos que le corresponden. El n�mero de horas debe ser menor que 24, y
  * el de minutos y segundos menor que 60.
  * 
  */

#include <iostream> 
using namespace std;

int main () {
  int entero;
  cout << "Indique el número de segundos: ";
  cin >> entero;

  int seg;
  seg = (entero%60);
  cout << seg << " segundos" << endl;

  int min;
  min = (entero/60);
  int x;
  x = min%60;
  cout << x << " minutos" << endl;

  int hours;
  hours = (min/60);
  int y;
  y = (hours%24);
  cout << y << " horas" << endl;

  int days;
  days = (hours / 24);

  int z;
  cout << days << " días." << endl;
  return 0;

}
  
  
