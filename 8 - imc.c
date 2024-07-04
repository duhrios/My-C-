#include <stdio.h>

main () {

 float imc, altura, peso;

 printf (" Digite o seu peso: ");
 scanf ( "%f", &peso);

 printf (" Digite agora sua altua:");
 scanf ("%f", &altura);

 imc = peso/(altura * altura);

    printf ("Seu IMC: %2.f", imc );
}