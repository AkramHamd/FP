/**
  * @file sexagesimal2grados.cpp
  * @brief Programa para pasar de grados/minutos/segundos a grados
  *
  * @author Fulanito...
  * @date Octubre-2021
  *
  * El programa recibe como entrada un entero (entre 0 y 359) que indica grados, un car�cter
  * 'g' que simboliza grados, un entero (entre 0 y 59), un car�cter 'm' que simboliza minutos
  * y un real en el intervalo [0,60) seguido de un car�cter 's' que simboliza segundos. Como
  * salida obtiene el n�mero de grados correspondiente como n�mero real.
  * Por ejemplo, con la entrada:
  *    34g 34m 1.2s
  * deber�a obtener la salida:
  *    34.567 grados
  * 
  * Adem�s, deber� comprobar que se cumplen las condiciones, es decir, si alg�n valor no 
  * est� en el rango correcto o alg�n car�cter simb�lico no es el esperado, la salida debe
  * indicar que hay un error de formato.
  */
#include <iostream>
using namespace std;

int main () {
  int g, m;
  double s, resultado;
  cout << "Introduce los grados (entre 0 y 359): ";
  cin >> g;

  while (g<0 || g>359){
    cout << "Error, vuelve a introcir el valor: ";
    cin >> g;
  }

  cout << "Introduce los minutos (entre 0 y 59): ";
  cin >> m;
  while (m<0 || m>59){
    cout << "Error, vuelve a introcir el valor: ";
    cin >> m;
  }
  cout << "Introduce los segundos (entre 0 y 59): ";
  cin >> s;
  while (s<0 || s>59){
    cout << "Error, vuelve a introcir el valor: ";
    cin >> s;
  }
  
  resultado = g +(m/60.0)+(s/60.0);
  cout << resultado <<" grados." << endl;


}