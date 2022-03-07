#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void evaluar_cadena(char *cadena){
  //char *p = "hola#como#estas#che#decime#";  
  char *p = cadena;
  char palabra[255];
  int cantidad_palabras = 0;
  char *palabras[10];

  int i, j=0, longitud_palabra;
  // aumentamos la cantidad de elementos que soporta nuestro
  // puntero a cadena caracteres 
  while(*p == '#' ) cantidad_palabras++;
  // char *palabras[cantidad_palabras];

  while(*p!='\0'){
    // vaciamos la palabra
    strcpy(palabra, "");
    // si es un centinela, avanzo 
    while(*p == '#' ){ j++, cantidad_palabras++, p++;}

    // inicializo 
    i = 0;
    // guardamos los caracteres de cada palabra delimitada por el centinela
    // - mientras el caracter al que apunta el puntero no es final de linea
    // - ni tampoco sea el centinela
    while(*p!='\0' && *p!='#'){
      // concatenamos en una cadena de caracteres, 
      // cada caracter al que apunta el puntero
      palabra[i] = *p;
      // i: lo usamos como indice del arreglo de caracteres, donde se guardará
      // p: avanzamos al siguiente caracter al que apunta
      i++, p++;
    }

    // - le agregamos el fin de cadena como cualquier cadena de caracter
    palabra[i]='\0';
    // calculamos la longitud para determinar el espacio en memoria que ocupará
    longitud_palabra = strlen(palabra);
    // reservamos memoria por cada cadena que vayamos a agregar
    palabras[j] = (char*) malloc(longitud_palabra*sizeof(char));
    // copiamos la cadena de caracteres 
    strcpy(palabras[j], palabra);
  }

  for(int i=0; i<cantidad_palabras;i++){
    printf("%s\n", palabras[i]);
  }
}

void solicitar_evaluar_cadena(char *cadena){
    printf("Ingrese una cadena: ");
    scanf("%s", cadena);
    fflush(stdin);
    evaluar_cadena(cadena);
}

void confirmar_evaluar_cadena(){
  char cadena[255];
  char confirmacion;

  solicitar_evaluar_cadena(cadena);

  while(1){
    printf("Desea evaluar otra cadena? (s/n)\n");
    scanf("%s", &confirmacion);
    fflush(stdin);

    if(confirmacion == 'n') break;
    else if(confirmacion == 's'){
      solicitar_evaluar_cadena(cadena);
    }
  }
}

int main(){
  confirmar_evaluar_cadena();
}
