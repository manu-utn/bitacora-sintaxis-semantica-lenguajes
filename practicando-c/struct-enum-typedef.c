/*
 * 1. Compilar en la terminal
 * gcc -g nombreArchivo.c -o nombreArchivo && ./nombreArchivo
 *
 * 2. Depurar en la terminal
 * gdb nombreArchivo
 */

#include <stdio.h>
#include <string.h>

// IMPORTANTE!!
// - La biblioteca string.h nos ofrece entre algunas de las tantas funcionalidades
// la de strcpy() para pasar un texto a una cadena de caracteres
// - Para que usar strcpy? Porque si declaramos un arreglo de caracteres y luego le queremos
// asignar una cadena, no retornará un error. A menos que usemos strcpy o apuntemos a
// a la zona de memoria de esa variable.

// ENUMERADOR
//
// - Se agrega el tipo enum, seguido del identificador, y luego conjunto de Identificadores
// - Cada Identificador representa una constante (un número)
// - El primer identificador se representa con el cero, pero se puede cambiar asignandole el valor
enum DIAS_SEMANA {LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO};

// en este otro comenzará a partir del 1 hasta el 7 (el anterior es del 0 al 6)
// enum DIAS_SEMANAv2 {LUNES=1, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO};

// --------------------------------------------------------------------------------------

// TYPEDEF
//
// - Cambia el tipo de un dato
// - Facilita la declaración de los tipos Estructura y Enumeración,
// porque te evitas escribir "struct tipoEstructura nombre", y usarias "tipoEstructura nombre"
// lo mismo para los de enumeracion. En vez de "enum DIAS dia" podrias usar "DIAS dia"
enum CARGOS {Director=3, Encargado=2, Empleado=1};
typedef enum CARGOS Cargos;

// Ej. Si quiero cambiar la forma en que declaro los números enteros
// En vez de utilizar int numero, puedo hacer Entero numero;
// typedef int Entero
// Entero edad = 10;


// --------------------------------------------------------------------------------------

// STRUCT ++ TYPEDEF
struct alumno{
  char nombre[30];
  int edad;
};
// - con el typedef, estoy cambiando la manera en que puedo
// declarar esta estructura alumno
// - nos evitamos escribir "struct alumno pepito" y solo ponemos "Alumno pepito"
typedef struct alumno Alumno;

void imprimirDatos(Alumno *);

int main(){
  enum DIAS_SEMANA dia;
  dia = LUNES;
  // imprimirá el número de la posición de LUNES
  printf("dia = %d \n", dia);

  dia = VIERNES;
  // imprimirá el número de la posición de VIERNES
  printf("dia = %d \n", dia);


  printf("\n\n---------------\n\n");
  Cargos cargo;
  cargo = Director;
  printf("Nivel Jerarquico: %d\n", cargo);

  printf("\n\n---------------\n\n");

  Alumno pepito;
  strcpy(pepito.nombre, "pepito");
  pepito.edad = 30;

  /* printf("Nombre: %s\n", pepito.nombre); */
  /* printf("Edad: %d\n", pepito.edad); */

  // le pasamos la dirección de memoria (para luego acceder como un puntero
  // usando -> para desreferenciar la dirección y obtener el atributo
  imprimirDatos(&pepito);

  printf("\n\n---------------\n\n");

  return 0;
}

void imprimirDatos(Alumno *info){
  printf("Nombre: %s\n", info->nombre);
  printf("Edad: %d\n", info->edad);
}
