/*4.	Desenvolver um algoritmo que efetue a soma de todos os números ímpares que são múltiplos de três e que se encontram no conjunto dos números de 1 até 500.*/

#include<stdio.h>

main(){

  int numeros_impares = 1 , soma= 0;

  while (numeros_impares < 500){

    if (numeros_impares %2 ==1) {
      if (numeros_impares %3 ==0){
        soma += numeros_impares;
        printf("\n%d", numeros_impares);
      }
    }
  numeros_impares ++;
  }
  printf("\nA soma dos numeros impares mul 3: %d", soma);
  
  
  return 0;
}