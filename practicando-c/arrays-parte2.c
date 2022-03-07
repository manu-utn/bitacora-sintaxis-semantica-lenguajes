#include <stdio.h>

// le avisamos que usaremos una matriz
// y la dimensión (cantidad de elementos) será el segundo parámetro
int promedioA(int [], int);

// este otro es exactamente lo mismo
// con la diferencia que recibimos la matriz como un puntero
// Obs: Una matriz está autoreferenciada, es de por si un puntero.
int promedioB(int *, int);

int main(){

  int numeros[6] = {[0 ... 5] = 15};
  int cantidad = 6;

  printf("El promedio A es: %d\n", promedioA(numeros, cantidad));

  printf("El promedio B es: %d\n", promedioB(numeros, cantidad));

  return 0;
}

int promedioA(int numeros[], int cantidad){
  int sumatoria = 0;

  for(int i=0; i < cantidad; i++)
    sumatoria += numeros[i];

  return sumatoria / cantidad;
}

int promedioB(int* numeros, int cantidad){
  int sumatoria = 0;

  for(int i=0; i < cantidad; i++)
    // accedemos a los elementos de la matriz (que es lo mismo que un puntero)
    // 1. encerramos entre () parentesis para indicarle en que dirección de memoria
    // debe posicionarse. Incrementando en bytes que ocupa en vez de un indice ó posición.
    // Obs: Esto se denomina arimética de punteros
    // Ej. Si el arreglo es del tipo entero, irá de 4 bytes en 4 bytes
    sumatoria += *(numeros+i);

  // Otro ejemplo
  // numeros[0] es igual a *(numeros)
  // numeros[1] es igual a *(numeros+1)
  // numeros[2] es igual a *(numeros+2)
  // numeros[3] es igual a *(numeros+3)
  return sumatoria / cantidad;
}
