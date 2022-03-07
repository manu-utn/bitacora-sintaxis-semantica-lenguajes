#include <stdio.h>

int main(){
  // colores 1 es un arreglo de char que almacena 4 cadenas de hasta 10 caracteres
  char colores1[][10] = {"verde", "rojo", "azul", "blanco"};

  // colores2 es un arreglo de punteros a char
  // NOTA: cada elemento de arreglo es un puntero a char, hay 4 punteros a char
  char *colores2[] = {"verde", "rojo", "azul", "blanco"};

  printf("Tamaño de colores1: %d\n", sizeof(colores1));
  printf("Tamaño de colores2: %d\n", sizeof(colores2));

  return 0;
}
