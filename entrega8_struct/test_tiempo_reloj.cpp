/**
  * @file tiempo_reloj.cpp
  * @brief Ordena dos tiempos introducidos por el teclado
  *
  * @author Akram Hamdouchi
  * @date Noviembre-2021
  * 
  * El formato de escritura de un tiempo consiste en:
  *    - Opcionalmente, el n�mero de d�as acumulados.
  *    - Un tiempo menor de 24 horas.
  * 
  * El n�mero de d�as se especifica con un entero seguido por el car�cter 'd'.
  * El tiempo se especifica con tres enteros, cada uno de ellos como un par de
  * d�gitos que se separan por el car�cter ':'.
  * 
  * Si no aparece el n�mero de d�as, se considera un tiempo con cero d�as. Por
  * tanto, s�lo contiene la tripleta de tiempo habitual en un reloj.
  *
  * Escriba un programa C++ que lea dos tiempos con el formato anterior y los
  * vuelva a escribir ordenados, primero el menor de ellos. Por ejemplo, si
  * leemos los siguientes tiempos:
  *    7d03:52:13 5d05:32:14
  * 
  * el programa deber� escribir:
  *    5d 05:32:14 7d 03:52:13
  * 
  * Note que la lectura no necesita que los datos est�n separados, aunque el
  * formato podr� admitir separadores blancos entre los datos. Por ejemplo,
  * podr�amos introducir los siguientes tiempos:
  *    3d 02:00:00 08:50:22
  * 
  * para que el programa escriba:
  *    08:50:22 3d 02:00:00
  * 
  * Observe que, en la lectura, el programa detectar� si los d�as son cero y,
  * en la escritura, evitar� escribir el n�mero de d�as si son cero.
  * 
  * En el programa deber� incluir:
  *    - Una estructura para almacenar los datos de un tiempo.
  *    - Una funci�n para leer un tiempo seg�n el formato anterior.
  *    - Una funci�n para escribir un tiempo seg�n el formato anterior.
  *    - Una funci�n que devuelva si dos tiempos est�n ordenados.
  * 
  * Puede suponer que el usuario introduce el formato indicado. No ser� necesario,
  * por tanto, controlar posibles errores de entrada.
  * 
  */
#include <iostream>
using namespace std;

struct Tiempo {
  int dias, horas, minutos, segundos;
};

Tiempo Pidetiempo () {
  Tiempo t1;
  char c;
  cin >> t1.dias >> c;

  if (c=='d') 
    cin >> t1.horas >> c >> t1.minutos >> c >> t1.segundos;
  
  else {
  t1.horas = t1.dias;
  t1.dias = 0; 
  cin >> t1.minutos >> c >> t1.segundos;
  }
  return t1;
}

bool Orden (Tiempo t1, Tiempo t2) {
  bool ordenado = false;

  if ( (t1.dias < t2.dias) || (t1.dias == t2.dias && t1.horas < t2.horas) ||
  (t1.dias == t2.dias && t1.horas == t2.horas && t1.minutos < t2.minutos) ||
  (t1.dias == t2.dias && t1.horas == t2.horas && t1.minutos==t2.minutos && t1.segundos<t2.segundos)){
    ordenado = true;
  }
  return ordenado;
}

void Salida1 (Tiempo ti1) {
  if (ti1.dias > 0) {
    cout << ti1.dias << "d" << " ";
    if (ti1.horas<10) 
      cout << "0";
      cout << ti1.horas << ":";
    if (ti1.minutos<10)
      cout << "0";
      cout << ti1.minutos << ":";
    if (ti1.segundos<10)
      cout << "0" ;
      cout  << ti1.segundos << " ";
  }
  else {
    if (ti1.horas<10) 
      cout << "0";
      cout << ti1.horas << ":";
    if (ti1.minutos<10)
      cout << "0";
      cout << ti1.minutos << ":";
    if (ti1.segundos<10)
      cout << "0" ;
      cout  << ti1.segundos << "   ";
  }
}


int main () {
  Tiempo t1, t2, t3;
  bool ordenado;
  cout << "Introduzca valores: ";
  t1 = Pidetiempo ();
  t2 = Pidetiempo ();
  ordenado = Orden (t1, t2);
  if (ordenado==true) {
    Salida1 (t1);
    Salida1 (t2);
  }
  else {
    Salida1(t2);
    Salida1(t1);
  }
}

