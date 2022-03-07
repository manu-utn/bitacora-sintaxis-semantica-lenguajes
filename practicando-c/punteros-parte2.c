#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  int cantidad_caracteres;
  printf("Escriba la longitud de la cadena de caracteres a reservar: ");
  scanf("%d", &cantidad_caracteres);

  char* palabra = (char*)malloc(cantidad_caracteres*sizeof(char));

  strcpy(palabra, "hoho");
  printf("La palabra que ya estaba guardada fue: %s\n", palabra);

  printf("Escriba la nueva palabra a guardar: ");
  scanf("%s", palabra); // aunque no entendi porque no usamos el operador & de direccion
  printf("\n");
  printf("La palabra guardada fue: %s\n", palabra);


  // liberamos el espacio en memoria
  // una vez que se liberó el espacio, se debe volver a reservar con malloc
  // Obs: con realloc se puede resolver "quizas"
  free(palabra);

  return 0;
}

