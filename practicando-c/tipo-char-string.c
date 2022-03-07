/*
 * 1. Compilar en la terminal
 * gcc -g nombreArchivo.c -o nombreArchivo && ./nombreArchivo
 *
 * 2. Depurar en la terminal
 * gdb nombreArchivo
 */
#include <stdio.h>

void imprimirPalabraV1(char *palabra){
  printf("Palabra: %s\n", palabra);
}

// Le pasamos de parámetro un arreglo/vector de caracteres
// por tanto usamos los [] corchetes
// Obs: No es necesario pasarle la longitud del arreglo
// Obs: Podriamos haber utilizado el operador * indirección, como en la V1
void imprimirPalabraV2(char palabra[]){
  printf("Palabra: %s\n", palabra);
}

int main(){
  // declaramos e inicializamos las variables
  //
  // - El char solo permite un caracter
  // - Un char representa un número entero (su valor en la tabla ascii)
  char letra = 'a';

  // - Un String es arreglo/vector de caracteres
  char palabraA[] = "hola";
  // - Un String también es un puntero (porque un vector es un puntero que
  // señala una zona en memoria reservada en tiempo de compilación.
  // El nombre del arreglo/vector es la dirección de comienzo de esa zona.
  char* palabraB = "chau";

  printf("Letra: %c\n", letra);
  printf("Palabra: %s\n", palabraA);

  // probamos hacer lo mismo mediante una función
  imprimirPalabraV1(palabraA);
  imprimirPalabraV2(palabraB);

  return 0;
}
