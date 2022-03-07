#include <stdio.h>

typedef int ENTERO;
//typedef void* T;

//struct T{ int m1; int m2; };
typedef struct s{ int m1; struct s *m2; } T;

struct s *pepe;

T f(double x){
	T t;
	t.m1=(int) x;
	return t;
}



int main(){
	T v, *p;
	v =f(1.0 );
	switch( v.m1){p= v .m2;}

	//ENTERO num;
	//num = 1;

	return 0;
}
