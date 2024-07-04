#include <stdio.h>
#include <math.h>

main () {

float a,b,hipotenusa, raiz;

printf ("Digite o valor do primeiro cateto:");
scanf ("%f", &a);
printf( "Digite o valor do segundp cateto:");
scanf("%f", &b);
hipotenusa = a*a+b*b;
hipotenusa = sqrt(hipotenusa); 

printf("O valor da hipotenusa e: %f\n", hipotenusa);

return 0;


}