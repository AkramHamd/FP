/**
  * @file encriptado.cpp
  * @brief Programa para encriptar/desencriptar con el m�todo de rotaci�n
  *
  * @author Akram-Hamdouchi
  * @date Octubre-2021
  *
  * Un algoritmo simple de encriptado consiste en cambiar las letras para hacer el mensaje 
  * no legible. Entre los m�s simples, podemos usar el de rotaci�n, usado por Julio C�sar
  * durante el imperio romano. La clave es un simple n�mero que indica cu�l es la rotaci�n:
  * todas las letras se cambian por la que corresponde a su posici�n en el alfabeto m�s la
  * clave. Se llama de rotaci�n porque se entiende que despu�s de la �z� viene la �a�, es
  * decir, el salto es una rotaci�n en el alfabeto.
  * 
  * Escriba un programa que recibe tres datos:
  *   - Una letra ('e' o 'd') que indica si se quiere encriptar o desencriptar, 
  *     respectivamente.
  *   - Una clave, es decir, un entero que corresponde al salto para codificar.
  *   - Una letra que corresponde a la letra a codificar/decodificar.
  * 
  * Por ejemplo, si la entrada es:
  *    e3a
  * El programa deber� escribir: d
  * 
  * L�gicamente, con la entrada:
  *    d3d
  * El programa deber� escribir la original: a
  * 
  * Finalmente, tenga en cuenta que debe codificar tanto min�sculas como may�sculas. Las
  * min�sculas se codifican con otra min�scula y las may�sculas de forma similar. Si un
  * car�cter no es una letra del alfabeto ingl�s, se escribe sin modificar.
  * 
  */
#include <iostream>
using namespace std;

int main () {
  cout << "Escribe e o d, la clave y la letra a codificar: ";
  char let, orden;
  char resultado;
  int cod;
  cin >> orden >> cod >> let;

  switch (orden)

  if (orden == 'e') 
  {
    if (islower(let)){
     resultado = let + cod;
    
   }

    else if (isupper(let)){
     resultado = let + cod;
    
   }

  if (orden='e' && let>='z') {
    cout << 'a' + (orden - 1);
  }


  }
   
   
    
   

/if z => z-a
  else (orden == 'd');
  {
    if (islower(let)){
     resultado = let - cod;
     cout << resultado;
   }
   else if (isupper(let)){
     resultado = let - cod;
     cout << resultado;
   }
  }

}