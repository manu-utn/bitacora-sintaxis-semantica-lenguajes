#include <stdio.h>

int main(){
  int arreglo[5] = {0,1,2,3,4};
  int *puntero;

  puntero = arreglo; // puntero = &arreglo[0]
  (*puntero)++; // arreglo[0]++


  // apunta a la dirección de memoria del siguiente elemento tipo int)
  // el puntero se incrementa en la longitud de un int, se deplaza lo que ocupe en memoria el objeto tipo int
  puntero++; // puntero = &arreglo[1]
  printf("DIRECCION=%x, arreglo[1]=%d\n", puntero, *puntero);

  { printf("%x\n", puntero); printf("%x\n", puntero);  /*imprimen lo mismo*/}

  return 0;
}
