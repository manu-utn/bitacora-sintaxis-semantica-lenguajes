#include <stdio.h>
#include <string.h>

// - declaramos una estructura empleado
// - definimos un arreglo de estructura empleado longitud 10 (reserva memoria para 10 elementos, que son tipo struct empleado)
struct empleado{
  char nombre[15]; // cadena de caracteres, longitud 15
  int edad;
} Empleados[10]; // con esta parte Empleados[10] se está definiendo el arreglo del tipo struct empleado

int main(){
  struct empleado *cocineros; // declaramos un puntero que apunta a una estructura

  // asignamos al puntero la dirección de memoria del primer elemento del arreglo de tipo struct empleado
  cocineros = Empleados; // una expresion equivalente es: cocineros = &Empleados[0]

  // - strcpy() es una función de la biblioteca string.h, para asignar una cadena de caracteres a un arreglo de tipo char
  // - accedemos a los miembros de la estructura con el operador . (punto)
  strcpy(Empleados[0].nombre, "pepe");
  Empleados[0].edad = 5;

  // ambos printf() imprimen el mismo resultado
  // - el 1ro usa el arreglo del tipo struct empleado
  // - el 2do usa el puntero que apunta al mismo arreglo del tipo struct empleado
  printf("Empleados[0].nombre=%s, Empleados[0].edad=%d\n", Empleados[0].nombre, Empleados[0].edad);

  // - accedemos a los miembros de un puntero a una estructura con el operador ->
  printf("cocineros->nombre=%s, cocineros->edad=%d\n", cocineros->nombre, cocineros->edad);

  printf("\n\n");

  /*****************************************************************************************************/

  struct empleado e1= { "carlitos", 10 };
  Empleados[1] = e1;
  // hacemos que el puntero apunte al siguiente dirección en memoria tipo struct empleado
  // cocineros = &Empleados[1]
  cocineros++;

  // ambos printf() imprimen el mismo resultado
  printf("Empleados[1].nombre=%s, Empleados[1].edad=%d\n", Empleados[1].nombre, Empleados[1].edad);
  printf("cocineros->nombre=%s, cocineros->edad=%d\n", cocineros->nombre, cocineros->edad);
  printf("\n\n");

  /*****************************************************************************************************/

  struct empleado e2= { "fede", 15 };
  // el puntero, apunta al direccion de memoria del segundo elemento del arreglo de tipo struct empleado
  // (recordá que Empleados[0] representa el primer elemento, Empleados[1] el segundo, y asi.. al menos asi es en C)
  cocineros = &Empleados[1];
  // - el índice negativo sólo se puede usar en punteros (NO SE PUEDE USAR INDICE NEGATIVO EN UN ARREGLO)
  // - un arreglo NO puede tener indice negativo, porque NO puede acceder a una zona de memoria que no le pertenece a ese arreglo
  // - el puntero cocineros[-1 ] apunta al primer elemento osea Empleados[0]
  //
  // 1) le asignamos a Empleados[0] la estructura empleado e2,
  // 2) luego a cocineros[-1] que es lo mismo que decir Empleados[0] le asignamos también e2
  // osea cocineros[-1] = e2 y Empleados[0] = e2 estarían haciendo lo mismo (suponiendo que cocineros=&Empleados[1])
  cocineros[-1] = Empleados[0] = e2;
  printf("Empleados[0].nombre=%s, Empleados[0].edad=%d\n", Empleados[0].nombre, Empleados[0].edad);
  printf("Empleados[1].nombre=%s, Empleados[1].edad=%d\n", Empleados[1].nombre, Empleados[1].edad);

  return 0;
}
