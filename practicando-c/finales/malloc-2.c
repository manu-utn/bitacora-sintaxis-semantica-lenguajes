#include <stdio.h>
#include <stdlib.h>

int main(){
	int i=5, x=2, z=2;
	void *p=&i;

	int *p2=&i;
	//int *p = malloc( sizeof(int) * 3);
	*p2=z;
	//*p=z; // ERROR

	p=&i;

	int a=*(int*)p * i;
	printf("a=%d\n", a);

	printf("%d\n", *(int*)p);

	p++; // avanza al siguiente objeto
	printf("%d\n", *(int*)p);
	//++*(int*)p;

	p++; // avanza al siguiente objeto
	printf("%d\n", *(int*)p);

	return 0;
}
