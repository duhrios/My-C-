/* 1.	Escreva um algoritmo que leia um valor inicial A e imprima a seqüência de valores do cálculo de fatorial! e o seu resultado. Ex: 5! = 5 X 4 X 3 X 2 X 1 = 120 */

#include <stdio.h>

main (){

int cont, fatorial, total;

scanf("%d", &fatorial);
  
  cont = fatorial;
  total = fatorial;

  while (cont > 0){

if (fatorial == cont ) {
  cont--; 
  }
total = total * cont;
  cont --;
    
  }

  printf("%d", total);

return 0;
}