/*
 * gcc -g preprocesador-guards-parte2.c preprocesador-alumno.c -o test && ./test
 */
/*
 *
 * Problema:
 * Si tenemos dos archivos que incluyen el mismo archivo cabecera .h
 * entonces habrá redefiniciones de estructuras (structs), y funciones.
 *
 * - Habrán problemas con la directiva #include porque habrán varios include que contienen
 * las mismas definiciones.
 * - El problema está en que el compilador fallará diciendo que "solo se puede
 * definir una vez" los structs, y las funciones.
 * -
 *
 * Solución?
 * Utilizar macro guards.
 * Son macros de condicionales, que uno debe implementar en cada archivo
 * para evitar multiples definiciones de structs, y funciones (redefiniciones)
 *
 * Estas macros son leidas primero por el preprocesador, y luego le llega
 * al compilador. Por eso le da solución.
 *
 * Alternativas? Usar la macro #pragma once
 * Aunque esta ultima macro, no funciona en algunos compiladores de C porque es estandar de C
 *
 */

/*
 * En este ejemplo usaremos los siguientes archivos
 * - archivos de cabecera
 * preprocesador-alumno.h
 *
 * - archivos de codigo fuente
 * preprocesador-alumno.c
 */
#include <stdio.h>
#include <string.h>
// El código fuente de alumno con extensión .c debe compilarse junto con este otro archivo .c en la terminal
// gcc -g preprocesador-guards-parte2.c preprocesador-alumno.c -o test && ./test
#include "preprocesador-alumno.h"

int main(){
  Alumno pepito;
  strcpy(pepito.nombre, "pepito");
  pepito.edad = 45;

  imprimirAlumno(&pepito);

  return 0;
}

