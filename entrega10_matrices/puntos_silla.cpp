/**
  * @file puntos_silla.cpp
  * @brief Escribe los puntos silla de una matriz
  *
  * @author Akram Hamdouchi
  * @date Mes-A�o
  *
  * Escriba un programa C++ que calcule los N puntos silla de una matriz rectangular.
  * La entrada consiste en las dimensiones de la matriz (filas y columnas) seguidas
  * de los elementos desde la primera hasta la �ltima fila, de izquierda a derecha.
  * 
  * Supondremos que un elemento de una matriz es punto silla si es el valor
  * m�ximo de su fila y, adem�s, es un valor m�nimo de su columna.
  *
  * Para resolver el problema deber� realizar los siguientes pasos:
  * 
  *   -# Calcular un vector con el valor m�ximo en cada fila.
  *   -# Calcular un vector con el valor m�nimo de cada columna.
  *   -# C�lculo de las posiciones de los puntos silla en una matriz Nx2.
  *   -# Escribir las posiciones en la salida est�ndar como una matriz.
  * 
  * Note que decimos posiciones porque en una misma matriz podr�a haber varios puntos
  * silla. Adem�s, cada posici�n est� compuesta de dos coordinadas: fila y columna.
  * 
  * Por ejemplo, si introduce la siguiente matriz:
  *    3 4
  *    1 2 3 4
  *    4 3 2 1
  *    3 4 1 2
  * 
  * el resultado ser�:
  *    0 0
  * que corresponde a una "matriz vac�a" (tambi�n se acepta escribir 0 2).
  * 
  * En cambio, si introduce la matriz:
  *    4 6
  *    10 12 15 14 11 15
  *    10 11 16 15 14 17
  *    10 10 15 13 12 15
  *    11 12 17 11 10 18
  * 
  * el resultado ser�:
  *    4 2
  *    0 2
  *    0 5
  *    2 2
  *    2 5
  * que corresponde a 4 puntos con dos coordenadas (filas y columnas) seguidos de
  * las posiciones de cada una de ellas (fila y columna).
  * 
  * Observe que los 4 puntos silla tienen el mismo valor, pues es posible que haya
  * dos puntos silla con distinto valor. De hecho, si la matriz tiene el mismo valor
  * en todas sus posiciones, deber�a obtener que todos son puntos silla. Si la
  * entrada es:
  *    2 2
  *    1 1
  *    1 1
  * el resultado ser�:
  *    4 2
  *    0 0
  *    0 1
  *    1 0
  *    1 1
  */
#include <iostream>
using namespace std;

const int MAX = 100;

void Pide_matriz(double Vin[][MAX], const int fila, const int columna)
{
  for (int i = 0; i < fila; i++) 
    for (int j = 0; j < columna; j++) {
      cin >> Vin[i][j];
    }
}




void V_min_columna (double m[][MAX], double v_col[], int tamf, int tamc){
  for(int i=0;i<tamc;i++){
    double minimo = m[0][i];
    for (int j=1;j<tamf;j++){
      if(minimo > m[j][i])
        minimo = m[j][i];
    }
    v_col[i] = minimo;
  }
}

void V_max_fila (double m[][MAX], double v_fil[], int tamf, int tamc){
  for(int i=0;i<tamf;i++){
    double maximo = m[i][0];
    for (int j=1;j<tamc;j++){
      if(maximo < m[i][j])
        maximo = m[i][j];
    }
    v_fil[i] = maximo;
  }
}

int V_out (double m[][2], double v_fil[], double v_col[], int tamf, int tamc){
  int contador = 0;
  for(int i=0; i < tamf; i++){
    for(int j=0; j < tamc; j++){
      if(v_fil[i] == v_col[j]){
        m[contador][0]=i;
        m[contador][1]=j;
        contador++;
      }
    }
  }
  if(contador==0){
    m[contador][0]=0;
    m[contador][1]=0;
  }

  return contador;

}

int main(){
  double m[MAX][MAX], mout[MAX][2];
  int tamf, tamc, total_filas;
  double v_max_fila[MAX], v_min_col[MAX];

  cin>>tamf>>tamc;

  Pide_matriz(m,tamf,tamc);

  cout << endl;

  for(int i=0; i<tamf; i++){
    for(int j=0; j<tamc; j++)
      cout << m[i][j] << " ";
    cout << endl;
  }

  cout << endl;

  V_min_columna(m, v_min_col, tamf, tamc);
  V_max_fila(m, v_max_fila, tamf, tamc);

  total_filas = V_out(mout, v_max_fila, v_min_col, tamf, tamc);

  if(total_filas==0)
    cout << 0 << " " << 0;

  else{
    cout << total_filas << " " << 2;

    for(int i=0;i<total_filas;i++){
      cout << endl;
      for(int j=0;j<2;j++){
        cout << mout[i][j] << " ";
      }
    }
  }
  cout << endl;
}

        

