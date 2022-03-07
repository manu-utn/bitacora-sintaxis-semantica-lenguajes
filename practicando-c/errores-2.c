#include <stdio.h>

// int num();
//int num; // error
//

struct persona{
	int edad;
};

struct robot{
	int *tareas;
};

int main(){
	int i,j=5;
	//int *p;
	void *p;
	p=&j;
	//i=*p;
	i = *(int*) p;

	/*
	int p=5;
	3+2;
	8 = p--;
	*/
	/*
	struct persona pepe;
	pepe.edad = 50;

	printf("edad de pepe: %d\n", pepe.edad);

	//struct robot pepito;
	*/
	//pepito.tareas = malloc()
	//struct robot *pepito;
	//pepito->tareas[0] = 1;
	/*
	char *v = "SSL";

	printf("%c\n", v[0]);
	printf("%c\n", v);
	printf("%c\n", *v);
	printf("%c\n", *(v+3));
	printf("%c\n", *(v+1));
	*/

	/*
	int a, x;

	fi(x>0); a=x;

	fi(x>0),  a=x;
	*/
	/*
	//int i=0;
	//int *p = &i;

	//const int a[1]={0},i=0,*p=a;
	float a[1]={0},i=0,*p=a;
	//int a[1]={0},i=0,p=1;
	a[i]=*p;
	*/

	/*
	{ }
	char a;
	a;
	a;

	int num;
	num; // error (?)
	*/

	//void *p;
	/*
	int i, j = 5;

	int *p;
	p = &j;

	printf("%d\n", *p);
	//i = *p; // ERROR
	*/

	return 0;
}
