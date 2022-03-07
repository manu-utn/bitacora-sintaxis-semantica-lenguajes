/*
 * 1. Compilar en la terminal
 * gcc -g nombreArchivo.c -o nombreArchivo && ./nombreArchivo
 *
 * 2. Depurar en la terminal
 * gdb nombreArchivo
 */


/*
 * IMPORTANTE!!!
 * - No se recomienda utilizar scanf() cuando se trata de cadenas de caracteres (es decir strings)
 * porque si ingresamos varias palabras separadas por espacio, guardará sólo la primera.
 * En todo caso deberiamos pasarle al scanf() tantos parámetros como palabras escribamos (no es muy cómodo)
 * Solucion: Usar fgets()
 *
 * - Utilizar para números, o si es sólo una palabra (sin espacios)
 *
 */
#include <stdio.h>

int main(){
  //
  int numeros[4] = {0};
  int cantidad = 4;

  for(int i=0; i< cantidad; i++){
    printf("ingrese un numero: ");
    scanf("%d", &numeros[i]);

    // otra alternativa usando punteros
    //scanf("%d", *(&numeros)+i);
  }

  for(int i=0; i< cantidad; i++){
    printf("%d, ", numeros[i]);
  }

  printf("\n");

  return 0;
}
