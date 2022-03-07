#include <stdio.h>

/*
 * ERROR (1): Porque primero se ejecuta el operador de incremento ++ que está como prefijo,
 * el resultado será una Constante Numerica Entera, por tanto ya no es un ValorL modificable
 * que es lo que necesita el operador de incremento ++ que esta como postfijo
 *
 * ERROR (2): Porque primero se ejecuta el operador de incremento ++ que esta como postfijo
 * e incrementa en 1 el valor de su operando a (porque es un ValorL),
 * el resultado de haberlo incrementado es una Constante Numerica Entera, por tanto ya no es un ValorL modificable
 * y el operador de incremento ++ que le sigue hace que tire error (porque necesita un ValorL modificable)
 * y al romper ahí ya no evalúa lo que le sigue que es +a;
 * */
int main(){
	int a = 5;

	int b = ++a + 2;

	int c = ++a+2;

	// int d = ++a++1; // ERROR (1)

	//int h = a+++++a; // ERROR (2) hubiera estado OK si fuese a++ + ++a
	
	int f = a+++a++; // ok

	int i = ++a+a++; // ok

	printf("a=%d, b=%d, c=%d, f=%d, i=%d\n", a, b, c, f, i);

	return 0;
}
