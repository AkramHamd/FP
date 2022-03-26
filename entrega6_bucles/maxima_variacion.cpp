/**
  * @file maxima_variacion.cpp
  * @brief Programa para calcular el m�ximo y m�nimo incremento
  *
  *
  * @author Akram Hamdouchi
  * @date Noviembre-2021
  *
  * Escriba un programa que lee una secuencia de valores no negativos hasta que
  * se introduce un valor menor que cero.
  *
  * El programa debe escribir como resultado el mayor incremento y el mayor
  * decremento entre valores consecutivos. Para ello, deber� calcular el m�ximo y
  * el m�nimo de las diferencias entre cada valor y el siguiente. Algunos ejemplos
  * de ejecuci�n son:
  *
  *     Introduzca valores: 2.5 3 6 7.1 1 -1
  *     El m�ximo incremento es: 3
  *     El m�ximo decremento es: 6.1
  *
  *     Introduzca valores: 1 2 3 4 5 -1
  *     El m�ximo incremento es: 1
  *     El m�ximo decremento es: no hay decrementos
  *
  *     Introduzca valores: 1 -1
  *     El m�ximo incremento es: no hay incrementos
  *     El m�ximo decremento es: no hay decrementos
  *
  *     Introduzca valores: -1
  *     No hay datos.
  */
  #include <iostream>
  using namespace std;
  int main(){
    double numero1, numero2=0;
    double diff, max_dec=1e30, max_inc=-10000000;

    cout<<"Introduzca una secuencia de números positivos (termina con negativo): ";
    cin>>numero1;
    while(numero2>=0 && numero1>0){
      cin>>numero2;
      if(numero2>=0){
        diff = numero1
  -numero2;
      }

      if(diff>0){
        if(diff>=max_inc){
          max_inc=diff;
        }
      }
      else if(diff<0){
        if(diff<=max_dec){
          max_dec=diff;
        }
      }
      numero1
=numero2;
    }
    if(max_dec==1e30 && max_inc!=-10000000){
      cout<<"No hay incrementos"<<endl;
      cout<<"El máximo decremento es: "<<max_inc<<endl;
    }
    if(max_dec!=1e30 && max_inc==-10000000){
      cout<<"El máximo incremento es: "<<-1*max_dec<<endl;
      cout<<"No hay decrementos"<<endl;
    }
    if(max_dec!=1e30 && max_inc!=-10000000){
      cout<<"El máximo incremento es: "<<-1*max_dec<<endl;
      cout<<"El máximo decremento es: "<<max_inc<<endl;
    }
    if(max_dec==1e30 && max_inc==-10000000 && numero1==numero2){
      cout<<"No hay incrementos"<<endl;
      cout<<"No hay decrementos"<<endl;
    }
    if(max_dec==1e30 && max_inc==-10000000 && numero1!=numero2){
      cout<<"No hay datos"<<endl;
    }
}