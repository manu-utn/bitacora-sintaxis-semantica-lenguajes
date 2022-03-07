// macros que leerá primero el preprocesador
// con esto evitamos problemas de doble inclusión
//
// IMPORTANTE!!!
// es decir si varios archivos incluyen este archivo cabecera
// el compilador avisará que no se puede definir dos veces
// un struct
#ifndef ALUMNO
#define ALUMNO

// en los archivos de cabecera
// se suele agregar las estructuras (Structs) y
// las declaraciones de las funciones (prototipos)
//
// en el codigo fuente con extensión .c
// se agregan las definiciones de las funciones
typedef struct alumno_t{
  char nombre[20];
  int edad;
} Alumno;

void imprimirAlumno(Alumno *info);

#endif
