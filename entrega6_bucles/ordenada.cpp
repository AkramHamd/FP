/**
  * @file ordenada.cpp
  * @brief Programa para determinar si una secuencia est� ordenada
  *
  *
  * @author Akram Hamdouchi
  * @date Noviembre-2021
  *
  * Escriba un programa que lea una secuencia de enteros positivos terminada en
  * un valor negativo, y que escriba en la salida est�ndar si la secuencia est�
  * ordenada de min a mayor. Un ejemplo de ejecuci�n es:
  *
  *     Secuencia (termina con negativo): 1 2 2 3 -1
  *     La secuencia est� ordenada.
  *
  * Tenga en cuenta que el programa debe ser lo m�s eficiente posible, por tanto,
  * podr� terminar en cuanto detecte que no est� ordenada.
  */
#include <iostream>
using namespace std;
int main(){
  int numero, min=-1;
  bool ordenada=true;

  cout<<"Introduzca una secuencia de números positivos (termina con negativo): ";
  do{
    cin>>numero;

    if(min <= numero){
      min=numero;
    }
    if(min > numero && numero>=0){
      ordenada=false;
    }
  }while(numero>0 && ordenada==true);

  if(ordenada==true){
    cout<<"La secuencia está ordenada de menor a mayor."<<endl;
  }
  else{
    cout<<"La secuencia no está ordenada de menor a mayor."<<endl;
  }
  return 0;
}