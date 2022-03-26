/**
  * @file figuras.cpp
  * @brief Programa para dibujar figuras en la consola
  *
  * @author Akram Hamdouchi
  * @date Noviembre-2021
  *
  * Escriba un programa que lea un n�mero entero N desde la entrada est�ndar
  * y que a continuaci�n dibuje con asteriscos, en la salida est�ndar, las 
  * siguientes figuras:
  *    - Tri�ngulo de lado N
  *    - Cuadrado hueco de lado N
  *    - Rombo de altura y ancho N. S�lo se dibuja si N es un n�mero impar.
  * A continuaci�n vemos una muestra de estas figuras para N=7:
  *      *            *******         *
  *      **           *     *        ***
  *      ***          *     *       *****
  *      ****         *     *      *******
  *      *****        *     *       *****
  *      ******       *     *        ***
  *      *******      *******         *
  */

#include <iostream>
using namespace std;

int main(){
  int n;

  cout<<"Intoduzca la longitud del lado: ";
  cin>>n;

  if(n>=3){
    if(n%2!=0){
    //Triangulo
      for(int i=0;i<n;i++){
        cout<<" "<<endl;
        for(int j=0;j<i;j++){
          cout<<"*";
        }
        cout<<"*";
      }

    //ESPACIO
      for(int i=0;i<n;i++){
        cout<<" ";
      }
      cout<<endl<<endl;

    //CUADRADO
      //LINEA Arriba
      for(int i=0;i<n;i++){
        cout<<"*";
      }
      cout<<endl;
    //COLUMNA Izquierda
      for(int i=0;i<n-2;i++){
        cout<<"*";
        for(int j=0;j<n-2;j++){
          cout<<" ";
        }
        cout<<"*"<<endl;
      }
    //LINEA Abajo
      for(int i=0;i<n;i++){
        cout<<"*";
      }
      cout<<endl<<endl;
    //Rombo EN CASO N ES IMPAR
      for(int i=1;i<=n;i+=2){
        for(int j=n+1;j>=i;j-=2){
          cout<<" ";
        }
        for(int k=1;k<=i;k++){
          cout<<"*";
        }
        cout<<endl;
      }
      for(int i=n;i>=1;i-=2){
        for(int j=i;j<=n+2;j+=2){
          cout<<" ";
        }
        for(int k=i-2;k>0;k--){
          cout<<"*";
        }
        cout<<endl;
      }
    }
    //SI EL NÚMERO INGRESADO ES PAR
    else{
      //Triangulo
        for(int i=0;i<n;i++){
          cout<<" "<<endl;
          for(int j=0;j<i;j++){
            cout<<"*";
          }
          cout<<"*";
        }
      //ESPACIO
        for(int i=0;i<n;i++){
          cout<<" ";
        }
        cout<<endl<<endl;
      // Cuadrado
        //LINEA Arriba
        for(int i=0;i<n;i++){
          cout<<"*";
        }
        cout<<endl;
      //COLUMNA Izquierda
        for(int i=0;i<n-2;i++){
          cout<<"*";
          for(int j=0;j<n-2;j++){
            cout<<" ";
          }
          cout<<"*"<<endl;
        }
      //LINEA Abajo
        for(int i=0;i<n;i++){
          cout<<"*";
        }
      cout<<endl;
    }
  }
return 0;
}
/* // Cuadrado 

for (int i=1; i<=n; i++) {  
   cout << "*" ;
  }
for (int col=1; col<=n; col++) {
  cout << "*" << endl;
} */

