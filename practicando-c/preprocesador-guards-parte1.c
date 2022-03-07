// Los siguientes condicionales son para el preprocesador
// es decir se ejecutan antes que pasen por el compilador.
//
// Si dentro de estos condicionales se generan cambios en el
// codigo fuente o no, esos cambios se pasan luego al compilador.

#include <stdio.h>

/*************************************************************/
//
// Esta parte del código fuente lo leera el Preprocesador
// y le pasará al compilador la primera función
#define PREMIUM

#ifdef PREMIUM
int calcularPrecio(int precio){
  float descuento = 0.20;
  return precio-(precio*descuento);
}
#else
int calcularPrecio(int precio){
  int descuento = 0.20;
  int intereses= 0.10;
  return precio*descuento+intereses;
}
#endif

/*************************************************************/

int main(){

  printf("Hola..!\n");
  int precio = 500;
  printf("Por ser PREMIUM le hacemos un gran descuento\n");
  printf("El precio final es %d\n", calcularPrecio(precio));

  return 0;
}
