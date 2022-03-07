#include <stdio.h>
#include <ctype.h>

int main(){
	//unsigned a = 1;
  int a = 0;
	float b = 0.5;
	char c = 'a'; // equivale al valor 97 según la tabla ascii

  double d = 1.2;
  //float d = 1.2L;
  /* a = isalpha(a)+ a + isdigit('\0'); */
  printf("isdigit()=%d\n", isdigit(5));
  printf("esalpha(a)=%d\n", isalpha(a));

  printf("sizeof(a):%d\n", sizeof(a));
  printf("sizeof(int):%d\n", sizeof(signed long int));
  printf("%f\n", d);
  printf("%e\n", d);
  printf("%g\n", d);
  /* double d = 5e4; */
  /* printf("d=%e\n",d ); */
  /* printf("d=%E\n",d ); */

  printf("\n\n");

  a = 1;
	a = a + 1.2;
	printf("a=%d\n", a);
	printf("a=%f\n", (float)a);

  a = 1;
	a = a + 1.2f;
	printf("a=%d\n", a);
	printf("a=%f\n", (double)a);

	printf("\n-------\n");

	printf("6=%c\n", 68);
	printf("'A'=%d\n", 'A');
	printf("'a'=%d\n", 'a');

	a = a + b; // conversión implícita sobre b, pasa de float a int
	printf("a+b=%d\n", a);

	b = 1/2 + 1/2;
	printf("1/2+1/2=%f\n", b);

	b = (float)1/2 + 1/2;
	printf("(float)1/2+1/2=%f\n", b);

	b = (float)1/2 + (float)1/2;
	printf("(float)1/2 + (float)1/2=%f\n", b);

	b = 0.5 + 0.5;
	printf("0.5 + 0.5=%lf\n", b);

	b = .5f + .5f;
	printf(".5f + .5f=%f\n", b);

	return 0;
}
