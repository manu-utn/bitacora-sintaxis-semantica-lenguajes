#include <stdio.h>
#include <string.h>

// Conceptos previos
//
// 1. Con typedef podemos cambiar el tipo de un dato
// - Esto útil al declarar variables, estructuras, ..
//
// 2. Con struct creamos una estructura que soporta distintos tipos de datos (int, char, ..)
// - Tiene como ventaja sobre las matrices, porque estas solo soportan un tipo (Ej. int numeros[10], char palabra[30], ..)
//


// Nuevos conceptos
//
// 1. En vez de declarar el tipo de dato, y luego renombrarlo con typef.
// Se puede hacer todo de una, es decir en el momento que se declarar ya se puede cambiar el tipo.


// Ej. Con enum
typedef enum cargo_t{
  DIRECTOR, ENCARGADO, EMPLEADO
} Cargo;

// Ej. con Struct
typedef struct alumno_t{
  char nombre[30];
  int edad;
  Cargo cargo; // metimos el enum
} Alumno;


int main(){
  Alumno pepito;
  strcpy(pepito.nombre, "pepe");
  pepito.edad = 50;
  pepito.cargo = EMPLEADO;

  Cargo cargo;
  cargo = DIRECTOR;

  return 0;
}
