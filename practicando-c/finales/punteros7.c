#include <stdio.h>

int main(){
  char cadena1[] = "carlitos";
  char *cadena2 = "pedrito";
  char * const cadena3 = "pepe"; // no se podrá hacer cadena3="hola"
  const char * cadena4 = "morales"; // si se podrá hacer cadena="pepe"

  printf("cadena1=%s\n", cadena1);
  printf("cadena2=%s\n", cadena2);
  printf("cadena3=%s\n", cadena3);
  printf("cadena4=%s\n", cadena4);

  printf("\n\n");
  // cadena1++; // ERROR SEMÁNTICO..! :( OPERACIÓN INVALIDA
  //
  // - Es error porque el operador de incremento ++ necesita de un operandor "l-value MODIFICABLE"
  // y el identificador cadena1 al ser definido como un arreglo se considera como un "puntero constante",
  // que NO puede apuntar a otra dirección de memoria.
  // - El compilador asigna de forma automática una zona en memoria para los arreglos (esto no sucede con los punteros)

  // OPERACIÓN VALIDA :)
  cadena2++;
  printf("cadena2=%s\n", cadena2);

  //cadena3++; // ERROR SEMANTICO
  printf("cadena3=%s\n", cadena3);

  cadena4 = "oh";
  printf("cadena4=%s\n", cadena4);

  return 0;
}
