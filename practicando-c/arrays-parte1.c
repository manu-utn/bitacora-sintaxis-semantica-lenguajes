#include <stdio.h>

int main(){

  //
  // Maneras de asignarle valores a un vector

  // 1. Colocar todos los elementos de forma contigua (uno seguido al otro)
  int numeros[6] = {1,1,1,2,2,2};

  // 2. Usando el operador ... elipsis
  int numerosA[6] = {
    [0 ... 2]=1,
    [3 ... 5]=2
  };

  // 2. Colocar el indice y asignarle el valor
  int numerosC[6] = {
    [0]=1, [1]=1, [2]=1,
    [3]=2, [4]=2, [5]=2
  };

  // 3. Inicializar y luego asignarle un valor
  int numerosD[6] = {0};
  numerosD[0] = 1;
  numerosD[1] = 1;
  numerosD[2] = 1;
  numerosD[3] = 2;
  numerosD[4] = 2;
  numerosD[5] = 2;

  // imprimimos los valores del vector
  for(int i=0; i<6; i++)
    printf("numeros[%d]=%d, ", i, numeros[i]);
  printf("\n\n");

  // Maneras de acceder y modificar los elementos del vector
  // 1. Le pasamos entre los [] corchetes la posición
  numeros[0] = 0;
  printf("numeros[0]=%d\n", numeros[0]);
  // 2. Por ser las matrices autoreferenciadas (son punteros)
  // accedemos al valor de la primera dirección en memoria del puntero
  // - Con el operador * de indirección accedemos al valor
  *numeros = 4;
  printf("numeros[0]=%d\n", *numeros);
  // Otra alternativa sería la siguiente
  *(numeros+0) = 5;
  printf("numeros[0]=%d\n", *(numeros+0));

  // repetimos las operaciones anteriores,
  // pero esta vez con el segundo elemento (el que está en la posición 1)
  *(numeros+1) = 9;
  printf("numeros[1]=%d\n", *(numeros+1));

  printf("\n");

  return 0;
}
