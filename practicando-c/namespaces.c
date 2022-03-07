#include <stdio.h>

int main(void){
	int nombre;
	int edad;

	struct otra { int campo; }; // tag: otra
	struct nombre{ int campo; int edad; }; // tag: nombre
	// enum fun{UNO, DOS, edad}; // tag: fun
	enum fun{UNO, DOS};
	enum fun numeros;
	printf("numero: %d\n", numeros=DOS);	

	nombre: return 0; // etiqueta: nombre

	return 0;
}
