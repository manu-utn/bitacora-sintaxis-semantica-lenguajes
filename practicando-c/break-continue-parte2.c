/*
 * 1. Compilar en la terminal
 * gcc -g nombreArchivo.c -o nombreArchivo && ./nombreArchivo
 *
 * 2. Depurar en la terminal
 * gdb nombreArchivo
 */

#include <stdio.h>

int main(){

  int numero;

  // Iteramos de manera infinita
  // porque la condición que se le pasa al while siempre se cumple
  //
  // Obs: Recordemos que mientras se cumpla una condición, el while
  // se seguirá ejecutando, caso contrario finaliza.
  // Ej. while(i<10) es decir mientras un contador i sea menor a 10,
  // y cuando sea mayor a 10 finalizaría.
  while(1){
    // lo siguiente se ejecutará en cada iteración
    // mientras que se cumpla la condición del while
    //
    // en este caso siempre se ejecutará a menos que finalicemos
    // su ejecución (es decir la iteración) con un break
    printf("Ingrese un número par: ");
    // el valor ingresado lo haremos en la variable numero
    scanf("%d", &numero);

    // OBJETIVO..
    // - Si el número es par, terminamos la ejecución de while
    // - A diferencia del continue, el break no permite que se vuelva a ejecutar
    if(numero % 2 == 0) break;
    printf("El número %d no es par.. Intente nuevamente\n", numero);
  }

  printf("El número par ingresado fue el %d\n", numero);

  return 0;
}
