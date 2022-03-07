#include <stdio.h>
#include <stdlib.h>

int main(){
  /********************************************************************/
  /**
   * Probamos como usar fflush() y scanf() con cadenas de caracteres
   */

  /*
    char nombre[30];
    char apellido[30];

    printf("Ingrese nombre: ");
    scanf("%s", &nombre);
    fflush(stdin); // limpiamos el buffer de entrada

    printf("INgrese apellido: ");
    scanf("%s", &apellido);
    fflush(stdin); // limpiamos buffer de entrada

    printf("Nombre:%s\n", nombre);
    printf("Apellido:%s\n", apellido);
   */

  /********************************************************************/

  /**
   * Probamos usar getchar() y putchar()
   * Leemos lo que tenga el buffer de entrada
   * Con EOF preguntamos fin de cadena, y con \n capturamos el salto de linea (el enter)
   */
  /*
   char caracter;
   printf("Escriba una palabra: ");
   while((caracter = getchar()) != EOF && caracter != '\n'){
   putchar(caracter); // lo mismo que printf("%c", caracter)
   }
   */

  /********************************************************************/


  /**
   * - Usamos getchar()
   * - Concatenamos los caracteres del buffer de entrada en un arreglo de caracteres
   * - Usamos un puntero en vez de un arreglo, solo a modo de práctica
   */

  /*
    char caracter;
    char *palabra = (char*) malloc(255*sizeof(char)); // este puntero, es lo mismo que char palabra[255];
    //char palabra[255];

    printf("Escriba una cadena de caracteres: ");
    for(int i=0;(caracter = getchar()) != EOF && caracter != '\n';i++){
      palabra[i] = caracter; // es lo mismo que... *(palabra+i) = caracter;
      // *(palabra+i) = caracter;
    }

    printf("Palabra:%s\n", palabra);

    // otra manera de correr el string
    printf("Palabra: ");
     while(*palabra!='\0'){
     printf("%c", *palabra);
     palabra++;
    }
    printf("\n");
   */

  /********************************************************************/

  /**
   * Usamos getchar()
   *
   */
  char caracter;
  char *palabra = (char*) malloc(255*sizeof(char)); // este puntero, es lo mismo que char palabra[255];
  int cantidad_palabras = 0; // lo iremos aumentando
  char *cadena[cantidad_palabras];

  // che#como#andasvos#
  printf("Escriba una cadena de caracteres: ");
  for(int i=0, j=0;(caracter = getchar()) != EOF && caracter != '\n';i++, j++){
    palabra[i] = caracter; // es lo mismo que... *(palabra+i) = caracter;

    // j = longitud palabra, n = numero de palabra, i = longitud cadena
    if(caracter == '#'){
      //cantidad_palabras++;
      //printf("cant. caracteres: %d\n", j);
      j = 0;
    }
    //palabra[i] = caracter; // es lo mismo que... *(palabra+i) = caracter;

    // *(palabra+i) = caracter;
  }

  printf("Palabra: ");
  while(*palabra!='\0'){
    printf("%c", *palabra);
    palabra++;
  }
  printf("\n");

  /* char *cadena = (char*) malloc(2*sizeof(char)); */
  /* cadena = "ho"; */
  /* cadena[0] ='a'; */
  /* cadena[1] ='b'; */
  /* printf("cadena:%s\n",cadena); */

  /* char *cadena[10]; // puntero a cadena de caracteres (arreglo de strings) */
  /* cadena[0] = "hola"; */
  /* cadena[1] = "chau"; */

  /* printf("%s\n", *cadena); */
  /* printf("%s\n", *(cadena+1)); */

  return 0;
}
