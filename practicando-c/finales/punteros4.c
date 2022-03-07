#include <stdio.h>

int main(){
	// los rvalue q no se pueden modificar, son aquellos a los q no se puede acceder a memoria
	// los lvalue q no se pueden modificar, es q se puede acceder a memoria pero no se pueden modificar xq son const ej.
	// los lvalue modificables los q pods acceder a memoria y bueno modificar (?)
	//
	// el LITERAL CADENA "SSL" es un lvalue no modificable
	//
	char a[] = "SSL"; // puntero constante, NO se puede modificar
	char *b  = "SSL"; // NO es puntero constante

	b = "b";
	a[0] = 'b'	;
	
	printf("a=%c\n",*a);
	//
	//b[3] = "a";
	//b = "asd";
	//b = 'b';
	
	//const int i; // no se va a poder modificar, lvalue no modificable
	//int *p = &i;
			

	//4='a';
	
	//b[0] = 'd';
	//b[3] = 'a'; // error porque hay que desreferenciar
	//*b = 'c';

	//char * const b = "SSL"; // es puntero constante, como con a[]
	//const char *c = "SSL";
	
	//*(b+0) = 'c';
	//*(a+0) = 'c';
	//(*a)++;
	//c++;
	//c[0] = 'z';

	//a++;

	//printf("a=%c, b=%c\n", *a, *b);

	return 0;
}
