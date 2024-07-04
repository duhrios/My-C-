#include <stdio.h>

main () {

float a,b,c;

printf(" Digite o primeiro numero:");
  scanf ("%f", &a);
  printf(" Digite o segundo numero:");
  scanf ("%f", &b);
  printf(" Digite o terceiro numero:");
  scanf ("%f", &c);

if (a>b && a>c && c>b){

  printf("A sequencia correta eh: %f %f %f", a,c,b);

} else if ( a> b && a<c){

  printf("A sequencia correta eh: %f %f %f", c,a,b);

} else if (a>b && c<b){
  printf("A sequencia correta eh: %f %f %f",a,b,c);

} else if (b>a && b>c && c>a){

  printf("A sequencia correta eh: %f %f %f",b,c,a);

} else if (b>a && c>b){

  printf("A sequencia correta eh: %f %f %f", c,b,a);

}else if (b>a && c>b && a>c){

  printf("A sequencia correta eh: %f %f %f", b,a,c);

  }

 return 0; 
}