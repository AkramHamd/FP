/**
  * @file contar_vocales.cpp
  * @brief Cuenta el n�mero de vocales de un texto
  *
  * @author Akram Hamdouchi
  * @date Noviembre-2021
  * 
  * Escriba un programa que cuenta el n�mero de vocales que contiene un texto. La
  * entrada del programa consiste en un texto que termina con el car�cter 
  * delimitador '#' (tambi�n llamado centinela).
  * 
  * Un ejemplo de ejecuci�n es:
  *    Esto es una prueba con
  *    un texto que finaliza con un centinela.#
  *    El n�mero de vocales es: 24.
  *
  * Para resolver el problema, debe incluir una funci�n que recibe un car�cter y
  * devuelve si es una vocal.
  * 
  */
#include <iostream>
using namespace std;

bool Vocales (char letra) {
    bool voc=false;
    if (letra== 'a' || letra== 'e' || letra== 'i' || letra== 'o' || letra== 'u' 
    || letra== 'A' || letra== 'E' || letra== 'I' || letra== 'O' || letra== 'U' ) {
        voc=true;
    }
    return voc;
}

int main () {

    char texto='c';
    int contador=0;

    cout << "Introduzca el tsexto (acabe con #): ";
    while (texto!='#') {
        cin >> texto;
        if (Vocales(texto)==true) {
            contador++;
        }
    }
//Salida
 cout << "El número de vocales es: " << contador;
}


