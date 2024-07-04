#include <stdio.h>
#include<math.h>

main () {

 float imc, altura, peso;

 printf (" Digite o seu peso: ");
 scanf ( "%f", &peso);

 printf (" Digite agora sua altua:");
 scanf ("%f", &altura);

 imc = peso/pow(altura, 2);

 printf ("Seu IMC: %2.f", imc );

 return 0;


}