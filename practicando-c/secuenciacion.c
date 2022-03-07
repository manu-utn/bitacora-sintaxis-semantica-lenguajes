#include <stdio.h>

int main(){
	int i = 5;
	i = ++i + 1;
	printf("i=%d\n", i);

	int a = 0;
	int v[] = {1,2,3};

	//printf("v[%d]=%d\n",a, v[a]);
	//v[a++]	= a;
	printf("v[%d]=%d\n", a, v[a++]);

	int b, c, f, e, h=0;
	printf("%d\n", ++b && 0+1); // devuelve 1

	printf("%d\n", c++ && 0); // devuelve 0

	printf("%d\n", f++ && f++); // devuelve 0

	printf("%d\n", e++ && e++ || e++); // devuelve 1

	return 0;
}
