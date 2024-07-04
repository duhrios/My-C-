#include <stdio.h>
#include <stdlib.h>

main(){

float produto = 50, vende = 70, lucro, por;

lucro = vende - produto;

por = (lucro / vende)*100;

printf ("Lucro de: %.2f", lucro );
printf ("\ncerca de: %.0f%%",por );


system ("pause");
return 0;

}