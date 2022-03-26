/**
  * @file rachas.cpp
  * @brief Programa para analizar las rachas de crecimiento/decrecimiento
  * 
  *
  * @author Fulanito...
  * @date Noviembre-2021
  *
  * Escriba un programa que procese y obtenga las rachas para una secuencia
  * de valores no negativos finalizada con un valor menor que cero.
  * 
  * El resultado será una secuencia de pares que corresponden a todas y cada 
  * una de las rachas. Estos pares estarán compuestos por:
  *    - Un carácter que indica el tipo de racha. Se usarán los caracteres 
  *      '+', '=' y '-' para indicar que es creciente, estable o decreciente 
  *      respectivamente.
  *    - La longitud de la racha. Si la racha se produce a partir de n valores,
  *      será de longitud n-1.
  * 
  * Algunos ejemplos de ejecución son:
  *     Introduzca valores: 1 2 3 4 -1
  *     + 3
  * 
  *     Introduzca valores: 1 -1
  *     
  * 
  *     Introduzca valores: 1 2 3 3 3 4 5 6 6 6 5 4 3 2 1 1 -1
  *     + 2 = 2 + 3 = 2 - 5 = 1
  * 
  * donde la segunda línea corresponde a la salida del programa.
  */
