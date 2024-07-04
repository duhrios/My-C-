#include<stdio.h>
#include <math.h>

main () {

float lados, lcm;
float area, epotema, pm , raiz = 3;

printf (" Digite quantos lado tem a poligono:");
scanf ("%f", &lados);


if (lados < 3){
    printf (" NAO EH UM POLIGONO ");

} else if (lados > 5){

printf ("POLIGONO NAO IDENTIFICADO");

} else if (lados == 3){
    printf ( "Digite o cm dos lados:");
    scanf ("%f", &lcm);
    
    area = (lcm * lcm * sqrt(3))/4;
    printf (" Triangulo \n Valor da area eh: %.2lf ", area);

} else if ( lados == 4){
    printf ( "Digite o cm dos lados:");
    scanf ("%f", &lcm);
    
    area = lcm * lcm;
    printf (" Quadrado \nValor da area eh: %.2f",area );

} else if (lados == 5 ){
    printf ( "Digite o cm dos lados:");
    scanf ("%f", &lcm);

    epotema = (lados * tan(3/5))/2;
    pm = lados * 5;
    area = (epotema * pm)/2;

    printf (" Pentagono \n%.2lf" , area);

}


return 0;
}
