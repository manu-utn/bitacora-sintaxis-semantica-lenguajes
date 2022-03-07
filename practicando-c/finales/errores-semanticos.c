#include <stdio.h>

int XXX(int);
void XX(int);

int main(){
  char *palabraA = "hola";
  char palabraB[] = {'h','o','l','a','\0'};

  printf("%s\n", palabraA);
  printf("%s\n", palabraB);

  int i = 1;
  /* while (i<5){ i++; printf("hola\n"); } */

  { 1+2; }
  { 1; }
  {
    int a,b,c;

    a < b < c;

    printf("hola che\n");
  }

  printf("%d\n", XXX(0));

  return 0;
}

void XX(int s){
  int a;

  /* return 0; */
}

int XXX(int param1){
  int a;
  /* double a; */

  a = 5;

  return a+1;

  //return a+b;
}
