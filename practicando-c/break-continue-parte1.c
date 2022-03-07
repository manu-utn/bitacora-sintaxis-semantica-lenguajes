/*
 * 1. Compilar en la terminal
 * gcc -g nombreArchivo.c -o nombreArchivo && ./nombreArchivo
 *
 * 2. Depurar en la terminal
 * gdb nombreArchivo
 */

#include <stdio.h>

int main(){

  int numeros[10] = {1,2,3,4,5,6,7,8,9,18};

  // imprimir los numeros pares y multiplos de 3 del vector numeros
  //

  // 1ra Alternativa - Usando condicionales
  printf("1ra Alternativa:\n");
  for(int i=0; i < 10; i++){
    if(numeros[i] % 2 == 0 && numeros[i] % 3 == 0)
      printf("%d, ", numeros[i]);
  }

  printf("\n---------------------\n");

  // 2da Alternativa - Usando CONTINUE
  // - Podemos usarlo para saltear iteraciones
  printf("2da Alternativa:\n");
  for(int i=0; i < 10; i++){
    // 1. Si no es par,
    // entonces saltamos a la siguiente iteración (irá a la siguiente iteracion, no finalizará el loop)
    // por lo cual no se evalúa lo que siga a esta linea
    if(numeros[i] % 2 != 0) continue;

    // 2. Si no es multiplo de 3,
    // entonces saltamos a la siguiente iteración (irá a la siguiente iteracion, no finalizará el loop)
    // por tanto no se evalúa lo que siga a esta linea
    if(numeros[i] % 3 != 0) continue;

    // 3. Si se cumplió alguno de los condicionales no llega a este punto
    //
    // Pero si NO se cumplieron (es decir es par, y es multiplo de 3)
    // ejecutamos el printf()
    printf("%d, ", numeros[i]);
  }

  printf("\n");

  return 0;
}
