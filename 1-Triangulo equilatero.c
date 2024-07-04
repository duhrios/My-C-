#include <stdio.h>
#include <math.h>
#include <stdlib.h>

main() {

float a, b, c;
float r, raiz=3;

printf ("Digite o valor do primeiro lado:");
scanf ("%f", &a);
printf ("Digite o valor do segundo lado:");
scanf ("%f", &b);
  

  if (a != b) {

     printf (" O Tringulo  não é equilatero");
  return 0;
  }

  printf ("Digite o valor do terceiro lado:");
  scanf ("%f", &c);

  if (b != c) {

     printf (" O Tringulo  não é equilatero");
  return 0;
  }
r = a * b * sqrt(raiz)/4;
  printf ("Valor da area eh:" "%f\n" ,r); 
  return 0;


}