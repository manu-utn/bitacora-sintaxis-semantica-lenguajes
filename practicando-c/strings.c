/*
 * 1. Compilar en la terminal
 * gcc -g nombreArchivo.c -o nombreArchivo && ./nombreArchivo
 *
 * 2. Depurar en la terminal
 * gdb nombreArchivo
 */

#include <stdio.h>
#include <string.h>
// la biblioteca string.h contiene la función strcmp()
// para comparar strings. Si retorna cero, es porque
// ambas cadenas son idénticas.
//
// Obs: Si tratamos de comparar con == los strings guardados en
// las variables, estariamos comparand su dirección en memoria
// en vez del dato..
#include <stdlib.h>
// la biblioteca stdlib.h contiene la función fflush()
// para de limpiar el buffer de stdin luego de ingresar un string
// la función

int main(){
  char textoA[30], textoB[30];
  int numero;

  // Si queremos ingresar strings que tengan palabras separadas
  // por espacios, se recomienda fgets en vez de scanf()
  //
  // Porque scanf() guardará en la variable sólo la primera palabra
  // a menos que.. le pasamos al scanf() tantos parámetros como palabras
  // separadas por espacio (algo que no es muy cómodo, a menos que sean 2 o 3 palabras)
  printf("Ingrese una o varias palabras: ");
  fgets(textoA, 30, stdin);
  // limpiamos el buffer stdin (para no tener problemas luego al ingresar mas
  // texto con otro fgets)
  fflush(stdin);

  printf("Primer texto ingresado fue: %s\n", textoA);

  printf("\n----------------------------------\n");

  printf("Ingrese una o varias palabras: ");
  fgets(textoB, 30, stdin);

  printf("Segundo texto ingresado fue: %s\n", textoB);

  if(strcmp(textoA, textoB) == 0){
    printf("ambos textos son idénticos\n");
  }else{
    printf("los textos no coinciden para nada..\n");
  }

  return 0;
}
