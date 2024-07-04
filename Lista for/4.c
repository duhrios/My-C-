#include<stdio.h>

main(){

int cont = 1, impares, soma=0;  

for (cont;cont <=500;cont++){

if(cont % 3 == 0){
  if (cont%2==1){
    impares= cont;
    soma += impares;
    printf("\n%i", cont);
      }
    }
}
printf("\n\n%", soma);
}