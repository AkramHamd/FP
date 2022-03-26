/**
  * @file datos2ascii.cpp
  * @brief Programa para dibujar una gr�fica de datos
  *
  * @author Akram Hamdouchi
  * @date Mes-A�o
  *
  * Escriba un programa que transforme una secuencia de datos encabezada
  * con la longitud en una gr�fica que representa la variaci�n de los datos. 
  * Un ejemplo con los 5 datos 1, 10, 3, 24 y 5 es:
  * 
  *   >
  *   --------------------------->
  *   ------>
  *   ---------------------------------------------------------------------->
  *   ------------>
  * 
  * Como puede ver, puede rellenar con el car�cter '-', terminar con el 
  * car�cter '>' y hacer que el m�ximo alcance un ancho de 70.
  * 
  * Para representar la funci�n, necesitamos determinar el intervalo donde se sit�an 
  * los valores. Conociendo este intervalo, es f�cil calcular de forma proporcional 
  * hasta d�nde hay que dibujar un determinado valor. Si es igual al m�nimo, se queda 
  * en un simple car�cter y si es el m�ximo alcanza la longitud m�xima.
  * 
  * Por ejemplo, una ejecuci�n de este programa podr�a ser:
  *    5  -10 3 7 10 3
  *    Representaci�n de datos en [-10 , 10]
  *      >
  *      --------------------------------------------->
  *      ----------------------------------------------------------->
  *      ---------------------------------------------------------------------->
  *      --------------------------------------------->
  * 
  * donde la primera l�nea corresponde a los datos de entrada. Observe que tambi�n se 
  * informa del intervalo donde se sit�an los datos antes de hacer el dibujo.
  * 
  * Nota: una vez resuelto el problema, compruebe que tambi�n funciona para una secuencia 
  * de valores id�nticos.
  */
#include <iostream>
using namespace std;

const int MAX = 1000;

void Pide_vector(double Vin[MAX], int n) 
{
   for (int i=0; i<n; i++) {
    cin >> Vin[i];
  }
}

double Maximo(double v[], int n) 
{
    double max;

    for (int i = 0; i < n; i++)
        if (i == 0 || max < v[i])
            max = v[i];
 
    return max;
}

double Minimo(double v[], int n) 
{
    double min;
 
    for (int i = 0; i < n; i++)
        if (i == 0 || min > v[i])
            min = v[i];
 
    return min;
}

void Pinta (double v[], int n, double min, double max) 
{
  int r;
  for (int i=0; i<n; i++) {
    r = ((v[i]-min) / (max-min) ) *70; 
    for (int j=0; j<r; j++) 
      cout << "-";
      
    cout << ">" << endl;
  }
}

int main () 
{
  double Vin [MAX];
  int n;
  double min, max;
  
  cin >> n;
  Pide_vector (Vin, n);
  max = Maximo (Vin, n);
  min = Minimo (Vin,n);

  cout << "Representación de datos en ["<< min << ", " << max <<"]"<<endl;
  Pinta (Vin, n, min, max);
}



