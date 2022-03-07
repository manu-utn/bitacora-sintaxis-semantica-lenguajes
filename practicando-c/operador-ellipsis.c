#include <stdio.h> 

int sumar(int, int, ...);

int main(void) {

  /*
  // En este probamos el operador ellipsis
  // es decir los tres puntos ...
  // en una funcion que recibe varios parametros
  int a, b;
  a = 2, b = 2;
  printf("La suma de %d \n", sumar(a,b,5));
  */

  /******************************/

  int numerosA[] = {1,2};
  printf("El primer elemento del arreglo es %d\n", numerosA[0]);
  printf("El primer elemento del arreglo es %d\n", *numerosA);

  printf("\n \n");

  int numerosB[] = {[0]=1, [1]=2};
  printf("El segundo elemento del arreglo es %d\n", numerosB[1]);
  printf("El segundo elemento del arreglo es %d\n", *(numerosB+1));

  printf("\n \n");
  
  int numerosC[] = {[0 ... 4]=1, [5 ... 10]=2};
  printf("El primer elemento del arreglo es %d\n", *numerosC);
  printf("El sexto elemento del arreglo es %d\n", *(numerosC+5));

  return 0;
} 

int sumar(int a, int b, ...){
  return a+b;
}
