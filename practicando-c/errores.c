#include <stdio.h>

void t(); 

int main(){
	char a[4];
	a[15]='b'; // Sin error, por que?

	int b = 5;
	void *p;


	// a[p] = 3; // error..!

	int x=5,y=2;
	// if x<y printf("hola\n"); // ERROR

	1+2;
	1;

	1 && 1;

	int c = 0, d=1;
	
	c && ++d;

	printf("%d\n", d);


	return  0;
}
