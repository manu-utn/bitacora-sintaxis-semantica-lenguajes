/*
 * 1. Compilar en la terminal
 * gcc -g nombreArchivo.c -o nombreArchivo && ./nombreArchivo
 *
 * 2. Depurar en la terminal
 * gdb nombreArchivo
 */

#include <stdio.h>
#include <stdlib.h>

// La biblioteca stdlib.h
// - Es la que permite utilizar la función malloc, para reservar memoria de forma dinámica

int main(){
  // int*
  // 1. Creamos un puntero del tipo int, con el identificador "numeros"
  //
  // malloc()
  // 2. reservamos memoria de forma dinámica
  // 3. Con 5 *sizeof(int) indicamos que queremos guardar 5 datos del tipo enteros
  // sino especificamos con sizeof(int) quizás nos reserve una cantidad correcta.
  // Obs: malloc devuelve un puntero del tipo void (por lo que puede devolver cualquier tipo de puntero
  // se recomienda castear el tipo de puntero)
  //
  // (int *)
  // 3. Estamos "casteando" lo que retorna la función malloc()
  // 4. Transformamos el resultado de malloc() por un puntero del tipo int
  // Obs: En realidad estamos casteando el puntero por defecto que retorna malloc() es que es (void *)
  // es decir un tipo genérico (puede devolver cualquier tipo, entero, flotante, char, etc..)
  int* numeros = (int*) malloc(5 * sizeof(int));

  for (int i=0; i < 5; i++){
    printf("Ingrese un número: ");
    scanf("%d", &(*numeros)+i);
    // otra variante seria &numeros[i]
    // scanf("%d", &numeros[i]);
  }

  printf("\n------------ \n");

  for (int i=0; i < 5; i++){
    printf("numero[%d]=%d\n", i, *(numeros+i));
  }


  ////////////////////////////////////////////////////////////////


  return 0;
}
