#include <stdio.h>

/**
 * ERROR (2): Porque la expresión que controla a un switch debe ser una CONSTANTE ENTERA
 *
 */

int main(){
	int suma; // está en otro ámbito, por tanto es otro Espacio de Nombres 

	int a = 1;

	a = 0;
	switch(a){
		case 0: printf("hola\n");
		break;
	}

	char *c;
	//switch(c){ // ERROR (2)
	//	case 0: printf("hola\n");
	//	break;
	//}

	float b;
	//switch(b){ // ERROR (2)
	//	case 1.1: printf("error..?\n");
	//	break;
	//}

	return 0;
}
