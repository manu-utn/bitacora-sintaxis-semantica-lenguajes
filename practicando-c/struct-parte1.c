/*
 * 1. Compilar en la terminal
 * gcc -g nombreArchivo.c -o nombreArchivo && ./nombreArchivo
 *
 * 2. Depurar en la terminal
 * gdb nombreArchivo
 */

#include <stdio.h>
#include <string.h>

// la biblioteca string.h
// entre tantas funciones, nos brinda strcpy
// para copiar un texto a una variable de cadena de caracteres

struct alumno{
  char nombre[30];
  int edad;
};

void imprimir_datosV1(struct alumno);
void imprimir_datosV2(struct alumno *);
void imprimir_datosV3(struct alumno *);

int main(){
  struct alumno pepito;
  strcpy(pepito.nombre, "pepito");
  pepito.edad = 30;

  printf("imprimir_datosV1:\n");
  imprimir_datosV1(pepito);

  printf("\n------------------------ \n\n");

  printf("imprimir_datosV2:\n");
  imprimir_datosV2(&pepito);

  printf("\n------------------------ \n\n");

  printf("imprimir_datosV3:\n");
  // IMPORTANTE!!
  // - El argumento que pasamos tiene el operador & de dirección
  // que permite pasarle la dirección de memoria donde se almacena la estructura
  // - En la declaración y definición de esta función, necesitaremos recibir
  // el parámetro como un puntero, para acceder a esa zona de memoria
  imprimir_datosV3(&pepito);

  return 0;
}

// - Recibimos de parámetro una estructura de manera normal
// - Accedemos a los atributos con el punto
void imprimir_datosV1(struct alumno info){
  printf("Nombre: %s\n", info.nombre);
  printf("Edad: %d\n", info.edad);
}

// - Otra manera de recibir el estruct sería con punteros
// - Accedemos a los atributos con el ->
// - El -> lo que hace es 1ro) desreferencia el puntero y 2do) obtiene el atributo
//
// IMPORTANTE!!
// - Si no usaramos el -> tenemos que usar el operador * de indirección y
// y luego el punto para obtener el atributo
void imprimir_datosV2(struct alumno *info){
  printf("Nombre: %s\n", info->nombre);
  printf("Edad: %d\n", info->edad);
}

// una alternativa "no tan amigable a la vista"
// - No es tan amigable porque usamos (*nombre del struct).atributo
// - con el operador * de indirección estamos desreferenciando el puntero para
// poder acceder a la zona de la dirección de memoria a la que apunta ese puntero
// - Con el punto . accedemos a los atributos de la estructura
void imprimir_datosV3(struct alumno *info){
  printf("Nombre: %s\n", (*info).nombre);
  printf("Edad: %d\n", (*info).edad);
}
