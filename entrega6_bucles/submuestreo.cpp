/**
  * @file submuestreo.cpp
  * @brief Programa para muestrear una secuencia de valores
  *
  *
  * @author Akram Hamdouchi
  * @date Noviembre-2021
  *
  * Escriba un programa que lee una secuencia de valores para obtener un
  * submuestreo. El programa deber� seleccionar un subconjunto de muestras
  * a partir de un par�metro que corresponde a la tasa de muestreo,
  * es decir, cada cu�ntos elementos seleccionamos una muestra.
  *
  * Tenga en cuenta que los datos de entrada terminar�n cuando se introduce
  * un valor menor que cero.
  * Adem�s el resultado ser� una secuencia terminada en un valor menor que
  * cero para marcar el final de secuencia de la misma forma.
  *
  * Por ejemplo, si el programa tiene n muestras x1, x2, ..., xn, -1, un
  * factor de 3 obtendr� la secuencia x1, x4, ..., -1.
  *
  * Para que el programa pueda trabajar con una entrada basada s�lo en la
  * secuencia de valores, la tasa de muestreo no se leer� desde la
  * entrada est�ndar. Deber� quedar fijada en el programa. Puede usar, por
  * ejemplo, el valor 3 (el resultado tendr� aproximadamente un 33% de los datos).
  *
  * Algunos ejemplos de ejecuci�n son:
  *     Introduzca valores: 2.5 3 6 7.1 1 -1
  *     2.5 7.1 -1
  *
  *     Introduzca valores: 1 2 3 4 -1
  *     1 4 -1
  *
  *     Introduzca valores: 1 -1
  *     1 -1
  *
  *     Introduzca valores: -1
  *     -1
  *
  * donde la segunda l�nea corresponde a la salida del programa.
  *
  * Note que no es necesario cargar todos los valores, es decir, podemos
  * ir leyendo y generando la secuencia resultante sin almacenar los valores
  * anteriores.
  */
#include <iostream>
using namespace std;
int main(){
  double numero;
  double cuenta = 0;
  const int t = 3;

  cout<<"Introduzca una secuencia de números positivos (termina con negativo): ";
  cin>>numero;
  if(numero>0){
    cout<<numero
<<" ";
   cuenta++;
  }
  while(numero>0){
    cin>>numero
;
    if (cuenta == t && numero
 > 0){
      cout << numero
   << " ";
     cuenta = 0;
    }
   cuenta++;
  }
  cout<<numero<<endl;

}