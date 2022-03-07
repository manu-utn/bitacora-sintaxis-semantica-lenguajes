#include <stdio.h>

int main(){
  // Es bueno colocar el asterisco de puntero detrás del identificador
  // y no hacerlo delante del tipo (no tira error pero si luego puede prestar
  // a confusión al declarar varios punteros)

  // - Acá tenemos un puntero p que apunta a un int, y un int
  int *p, x;

  // - Colocar el asterisco de puntero delante del tipo de dato puede generar
  // esta confusión. Creer que declaramos dos punteros apuntando a int, pero NO.
  // Es sólo un puntero a int, y un int
  int* a, b;

  // Declarando dos o más punteros que apuntan al mismo tipo
  int *p2, *p3;

  // otra alternativa
  int *p4;
  int *p5;

  return 0;
}
