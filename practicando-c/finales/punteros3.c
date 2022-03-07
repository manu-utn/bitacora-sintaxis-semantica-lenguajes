#include <stdio.h>

int main(){
	int i=0;
	double x = 3;


	void *p = &i;
	
	{ float i=2; i=*(int *)p+5; }

	//p = &x;
	*(int *)p++;
	p++;
	//i++;

	//printf("%d\n", *p); // error porque hay que castear cuando desreferencio
	printf("%d\n", *(int *) p); // 1) casteo, digo que es un puntero a entero. 2) lo desreferencio, para sacar el valor
	//printf("%f\n", *(double *) p); // 1) casteo, digo que es un puntero a constante real. 2) lo desreferencio, para sacar el valor

	return 0;
}
