#include <stdio.h>
#include <stdlib.h>

int main(){
	int i=0;

	printf("sizeof: %d\n", sizeof(i)*2);
	printf("sizeof: %d\n", sizeof(int)*2);

	int *p;
	p = &i;
	//*p++; // MAL
	(*p)++;

	++*p; // es lo mismo que ++(*p)

	//printf("p=%d\n", p);
	//p++;

	printf("p=%d\n", *p);

	p = malloc(sizeof(int) * 2); // reservo memoria para dos enteros

	{ p[0]=1, p[1]=2; } // por mas que esté en otro bloque, estamos modificando

	*p = 5;
	*(p+0) = 6; // es igual que *p=6;
	*(p+1) = 10;

	printf("p[0]=%d, p[1]=%d\n", p[0], p[1]);


	return 0;
}

