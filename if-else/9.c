#include<stdio.h>

main (){

int a,b,c;

printf ("Digite tres valores:");
scanf ("%i %i %i", &a,&b,&c);

if (a>b || a>c ) {

printf ("O numero maior eh: %i", a);

} else if (b>a || c<b) {

printf ("O numero maior eh: %i", b);

} else if (c>b || a<c){

 printf ("O numero maior eh: %i", c); 

}


return 0;

}