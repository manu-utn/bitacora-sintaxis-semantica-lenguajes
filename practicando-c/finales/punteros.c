#include <stdio.h>

struct persona{ int edad; } pedro;

//struct A{ struct B{ int c; } b;} a;

struct{ struct{ int c; }b[42+1]; } a={0};
//struct{ struct{ int c; }b[42+1]; } a;
//
int *f(int x){
	int a[5]={x};
	int *p = a; //int *p = &a; 
	return p;
}

int main(){
	printf("%d\n", f(5)[0]);

	printf("%d\n", a.b[42].c);

	pedro.edad = 5;
	printf("edad:%d\n", pedro.edad);

	int *a, b=5; 
	a = &b;

	printf("x:%d\n", *a); // apunta al valor de b
	b = 3;
	printf("x:%d\n", *a); // apunta al valor de b

	return 0;
}
