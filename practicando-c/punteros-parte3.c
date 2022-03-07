#include <stdio.h>

void incrementarV1(int num);
void incrementarV2(int* num);

void imprimir(int num);

int main(){

  int num = 0;

  printf("imprimir V1:\n");
  incrementarV1(num);
  imprimir(num);

  printf("\n--------------\n");

  printf("imprimir V2:\n");
  incrementarV2(&num);
  imprimir(num);

  return 0;
}


void imprimir(int num){
  printf("num=%d\n", num);
}

void incrementarV1(int num){
  num+=1;
}

void incrementarV2(int* num){
  *num+=1;
}
