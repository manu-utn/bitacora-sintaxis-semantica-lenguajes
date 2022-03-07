#include <stdio.h>

int i, a[0], f(int);

int main(){
	int a, b, *c, *d;
	a=5, b=2;

	//&c = &a;
	c = &a;
	// d= *c; // ERROR por cast
	// d = &c; // ERROR
	d = c;

	printf("a=%d, b=%d, c=%d, d=%d, d=%d, d=%d\n", a, b , *c, *d, d[0], *(d+0) );

	//&a[];
	// es lo msmo *d que *(d+0) que d[0]

	return 0;
}
