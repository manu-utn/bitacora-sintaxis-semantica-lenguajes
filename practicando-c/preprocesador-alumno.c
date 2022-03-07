#include <stdio.h>
#include "preprocesador-alumno.h"

void imprimirAlumno(Alumno *info){
  printf("Su nombre es %s ", info->nombre);
  printf("y su edad %d\n", info->edad);
}
