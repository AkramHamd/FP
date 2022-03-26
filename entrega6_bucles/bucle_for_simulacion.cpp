/**
  * @file bucle_for_simulacion.cpp
  * @brief Estima el valor de PI con un algoritmo de simulaci�n de una diana
  *
  * @author Akram Hamdouchi
  * @date Noviembre-2021
  * 
  * Escriba un programa que estima el valor de PI lanzando puntos uniformemente
  * distribuidos en un cuadrado y calculando el porcentaje de ellos que caen en
  * el c�rculo inscrito.
  * 
  * El programa lee como entrada un valor N que indica el n�mero de puntos que
  * debe lanzar en un cuadrado y escribe en la salida est�ndar el valor estimado
  * de PI tras generar aleatoriamente N puntos. 
  * 
  * El programa deber� asegurarse de que N es un valor positivo. El estudiante
  * puede seleccionar el tama�o de cuadrado --y por tanto, de c�rculo-- que
  * considere aportuno.
  * 
  * Las ecuaciones para resolverlo las puede consultar en el ejercicio A.1 del 
  * libro de ejercicios. Note que este ap�ndice incluye una explicaci�n sobre
  * c�mo crear valores aleatorios usando la funci�n rand del est�ndar.
  * 
  */


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main () {
    srand (time(0));
    int  dentro=0, fuera;
    const double lado =1.0;
    double n, suma=0, x, y, pi, radio = lado/2.0, centro=lado/2.0;

    cout << "Programa que estima el valor de PI lanzando puntos uniformemente distribuidos en un cuadrado" << endl;
    cout << "Introduzca el valor de N: ";
    cin >> n;
   //Obligar a que N sea un valor mayor que cero.
    while (n<=0) {
        cout << "N debe tener un valor positivo. Vuelva a introducir el valor: ";
        cin >> n;
    }

// Bucle for con los datos aleatorios
     for (int i = 0; i < n; i++)
    {
        x = (double)rand()/(double)(RAND_MAX); // generar numero aleatorio de tipo double entre 0 y 1
        y = (double)rand()/(double)(RAND_MAX);
    // Teniendo en cuenta el lugar geometrico del circulo (x^2+y^2=r^2), podemos saber si (x,y) está dentro del circulo
        if ( (x-centro) * (x-centro) + (y-centro) * (y-centro) = (radio * radio) )
        {
            dentro = dentro + 1;
        }
    }

// RESULTADO FINAL
    pi = (dentro*4.0) / n;
    cout << "Aproximadamente, generando " << n << " puntos, PI es " << pi << endl;
    cout << endl;   
}
