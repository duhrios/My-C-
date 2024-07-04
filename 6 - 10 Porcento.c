#include <stdio.h>

main () {

float preco,des, vf;
  float por=10;

printf ("Digite o valor do produto:");
scanf ("%f", &preco);

des = (preco*por)/100;

vf = (preco-des);

printf (" Seu desconto foi de reais %.2f", des);
printf ("\n valor a pagar: %.2f\n", vf);


    return 0;
}