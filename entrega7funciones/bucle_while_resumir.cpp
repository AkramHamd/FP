/**
  * @file bucle_while_resumir.cpp
  * @brief Resume una secuencia de valores en franjas de tiempo
  *
  * @author Fulanito...
  * @date Noviembre-2021
  * 
  * Escriba un programa para leer una secuencia de valores obtenidos en
  * intervalos de tiempo constantes para expresarlos en franjas de tiempo
  * simplificando los valores repetidos.
  * 
  * Por ejemplo, podemos suponer que se determina el costo de la energ�a a lo
  * largo de un d�a y se quiere simplificar la informaci�n mostrando las 
  * franjas con igual coste.
  * 
  * El programa recibe como entrada:
  *   - El tiempo de comienzo de muestreo (horas:minutos:segundos).
  *   - El intervalo de muestreo o tiempo entre muestras (segundos).
  *   - Una secuencia de muestras, valores reales no negativos.
  * 
  * La salida consiste en cada una de esas franjas en una l�nea donde se presenta
  * el tiempo de comienzo de la franja, el final, y el coste asociado.
  * 
  * Por ejemplo, la entrada puede ser:
  *    00:00:00
  *    3600
  *    150 150 150 150 150 150 150 175 175 190 190 190
  *    190 190 170 170 180 200 200 200 200 190 190 190
  *    -1
  * 
  * Y la salida correpondiente ser�a:
  *    00:00:00 07:00:00 150
  *    07:00:00 09:00:00 175
  *    09:00:00 14:00:00 190
  *    14:00:00 16:00:00 170
  *    16:00:00 17:00:00 180
  *    17:00:00 21:00:00 200
  *    21:00:00 00:00:00 190
  * 
  * Observe que en la entrada aparece un valor negativo para indicar el final
  * de la secuencia de valores.
  * 
  * Note que los tiempos cambian s�lo la hora porque el itervalo es de 3600
  * segundos. Si hubiera intervalos de muestreo menores se obtendr�an fracciones
  * de hora (pruebe con muestreo cada 1 segundo o 30 segundos para comprobar
  * que su programa funciona correctamente).
  * 
  * Tenga en cuenta que los valores de tiempo aparecen siempre con dos d�gitos.
  * Por ejemplo, 1 hora y 5 segundos se debe escribir como 01:00:05.
  * 
  * El programa tambi�n indicar� que no hay datos si no hay muestras. Por ejemplo,
  * con la siguiente entrada:
  *    00:00:00
  *    3600
  *    -1
  * 
  * Note que si hay alg�n dato, habr� al menos un intervalo. Con la entrada:
  *    00:00:00
  *    1800
  *    150 -1
  * 
  * Obtendr� el intervalo:
  *    00:00:00 00:30:00 150
  * 
  * El programa deber� estar resuelto en la funci�n main. No se usar�n vectores ni
  * funciones.
  * 
  */

#include <iostream>
using namespace std;

int main () {
    int h, m, s, intervalo, muestra1, muestra2, muestra, contador=1, cero=0, h1, m1, s1;
    char p;

    cin >> h >> p >> m >> p >> s;
    cin >> intervalo;
    cin >> muestra1;
    while (muestra1>0) {
        cin >> muestra2;
        if (muestra1=muestra2) {
            contador++;
        }
        else if (muestra1!=muestra2) {
            s = intervalo + s;
            if (s>=60) {
                m1 = ( (s % 60));
                m = m + m1;
                s = s - (60*m1);
            }
            if (m>=60) {
               h1= (m%60);
               h = h + h1;
               m = m - (60*h1);
            }
            if (h>=24) {
                
            }
        }

        muestra2=muestra1;
        
    }

    if (h/10<1 && m/10<1 && s/10<1) {
        cout << cero << h << cero << m << cero << s;
    }
    if (h/10<1 && m/10<1 && s/10>1) {
        cout << cero << h << cero << m << s;
    }
    if (h/10<1 && m/10>1 && s/10<1) {
        cout << cero << h << m << cero << s;
    }
    if (h/10<1 && m/10>1 && s/10>1) {
        cout << cero << h << m << s;
    }
    if (h/10>1 && m/10<1 && s/10<1) {
        cout << h << m << cero << cero << s;
    }
    if (h/10>1 && m/10<1 && s/10>1) {
        cout << h << cero << m << s;
    }
    if (h/10>1 && m/10>1 && s/10<1) {
        cout << h << m << cero << s;
    }
    if (h/10>1 && m/10>1 && s/10>1) {
        cout << h << m << s;
    }
    
}
   