//7.Faça um programa que verifique e mostre os números entre 1.000 e 2.000 (inclusive) que, quando divididos por 11 produzam resto igual a 2.

#include <stdio.h>

main(){

  int cont = 1000;

for (cont; cont < 2000; cont++){
  
  if( cont % 11 == 2){
    printf("\n%d", cont);
    }
  }
 return 0;
}