#include <stdio.h>

// declaramos la función
// - se suele conocer como prototipo
// 1. Se coloca el tipo del dato a retornar (en este caso void no devuelve nada)
// 2. Seguido del identificador (nombre de la función)
// 3. Seguido de los parámetros usando el operador de puntuación ( ) para delimitar
// 4. Con los ; avisamos que es el fin de la expresión (que es la declaración de una función)
//
// Obs:
// - no es obligatorio asignar nombre a los parámetros
// - el parámetro será un dirección de memoria, por tanto capturamos el valor con
// el operador * de indirección poder operarlo cuando definamos la función
void operacionB(int);
void operacionA(int *);

int main(){

  // declaramos las variables a y b
  // - 1. colocamos el tipo del dato a guardar (en este caso son enteros)
  // - 2. colocamos el identificador (el nombre de la variable)
  int a,b;

  // inicializamos las variables
  // 1. colocamos el identificador a la izquierda de operador de asignación
  // Obs: El identificador debe ser un Lvalue (que se puede modificar)
  // 2. Le asignamos el valor
  a = b = 0;

  // Sería un error escribir lo siguiente.. (no tirará error, pero no hará que creemos)
  // a,b=0;
  //
  // eso esta MAL.. solo le asignaría el valor cero a la variable 'b'
  // mientras que la primera variable 'a' obtendria un valor basura

  operacionB(b);
  printf("b=%d \n", b);

  // llamos a la función operacionA
  // le pasamos como argumento la dirección de memoria de la variable a
  // para poder modificar su valor dentro de la función
  // Obs: Si no usaramos el operador & de dirección, los cambios que hagamos
  // en la variable dentro de la función desaparecerán cuando termine su tiempo
  // de vida (cuando finalice su ejecución) de la función, y sólo será dentro de la misma.
  printf("&a=%d\n", &a);
  operacionA(&a);

  // Podemos ver que el cambio que se hizo dentro de la función
  // también se hizo en la variable, sin necesidad de retornar un valor
  printf("a=%d \n", a);

  return 0;
}

// Definimos las funciones
//
// 1. El parametro que recibe será una dirección en memoria (porque cuando la llamamos en el cuerpo de main
// estabamos usando el operador & de dirección)
// pero.. al utilizar el operador * de indirección le estamos diciendo que queremos su valor, el valor que
// contiene esa dirección en memoria
void operacionA(int *x){
  // guardamos el valor en una variable temporal
  int tmp = *x;
  // realizamos cualquier operación a modo de ejemplo
  tmp = tmp + 2;
  // modificamos el valor de la dirección en memoria a la que apuntaba
  *x = tmp;

  // Obs: Si no hubiesemos usado los operadores & y *
  // el valor solo se vería modificado dentro de la función
  // y no se modificaría en el cuerpo del main
}

// Este es un ejemplo en el que el valor se modifica, sólo dentro del bloque de la función
// por tanto las variables que utilicen esta función no se verán afectadas
//
// Solución:
// - En vez de usar el tipo void, usar int para retornar un valor
// - O si usar el operador & y * como en la función operacionA()
void operacionB(int x){
  int tmp = x;
  x = tmp + 10;
}
