/**
  * @file punto_medio.cpp
  * @brief Punto medio de una secuencia de puntos
  *
  * @author Akram Hamdouchi
  * @date Noviembre-2021
  * 
  * El formato de escritura de un punto en el plano consta de la secuencia:
  *    - Car�cter '('.
  *    - Coordenada X.
  *    - Car�cter ','.
  *    - Coordenada Y.
  *    - Car�cter ').
  * 
  * admitiendo, opcionalmente, separadores blancos en medio de dichos componenetes.
  * 
  * Escriba un programa en C++ que lea dos puntos y escriba en la salida est�ndar
  * el punto central. Este punto es el que se sit�a entre los dos a igual distancia,
  * es decir, el punto medio.
  * 
  * En la soluci�n debe:
  *    - Definir una estructura para almacenar un punto en el plano.
  *    - Definir una funci�n que lee un punto desde la entrada est�ndar.
  *    - Definir una funci�n que escribe un punto en la salida est�ndar.
  *    - Definir una funci�n que calcula el punto medio desde dos puntos.
  * 
  * La entrada consta de dos puntos con el formato anterior y la salida se deber�
  * escribir con el mismo formato. Por ejemplo, una posible entrada es:
  *     (0,0) (1,1)
  * 
  * y la salida correspondiente ser�a:
  *     (0.5,0.5)
  * 
  * Puede suponer que el usuario introduce el formato indicado. No ser� necesario,
  * por tanto, controlar posibles errores de entrada.
  * 
  */
#include <iostream>
using namespace std;

struct Punto {
  double X;
  double Y;
};

Punto Pidepunto () {
  Punto p1;
  char c;
  cout << "Escriba un punto: ";
  cin >> c >> p1.X  >> c >> p1.Y >> c; 
  return p1;
}

void Salida (Punto pmedio) {
  cout << "(" << pmedio.X << "," << pmedio.Y << ")";
}

Punto Puntomedio (Punto p1, Punto p2) {
  Punto pmedio;
  pmedio.X = (p1.X + p2.X)/2;
  pmedio.Y = (p1.Y + p2.Y)/2;
  return pmedio;
}

int main () {
  Punto p1, p2, pmedio;
  p1 = Pidepunto ();
  p2 = Pidepunto ();
  pmedio = Puntomedio (p1, p2);
  Salida (pmedio); 
}

