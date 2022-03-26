/**
  * @file grados2gr_m_s.cpp
  * @brief Programa para pasar de grados decimales a grados, minutos, segundos (Ej. 1.16)
  *
  * @author Akram-Hamdouchi
  * @date Octubre-2021
  *
  * Escriba un programa para convertir los grados decimales a grados, 
  * minutos y segundos. Recuerde que un grado son 60 minutos y un minuto son 
  * 60 segundos. Por ejemplo, si escribimos como entrada 34.567, deber� obtener en la
  * salida 34 grados 34 minutos 1.2 segundos.
  */

#include <iostream>
using namespace std;

int main () {

  double n1, s; 
  int g, m;
  
  cout << "Introduce el número en grado decimales: ";
  cin >> n1;
  //GRADOS
  g = n1;
  //MINUTOS
  m = ((n1-g)*60);
  //SEGUNDOS
  s = ((((n1-g)*60)-m)*60.0);

  cout << "El resultado: "<< g  <<" grados " << m << " minutos " << s << " segundos"; 
}