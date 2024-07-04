#include <stdio.h>


main (){

int fatorial, cont;
int total = 1;

  printf("Digite o fatorial:");
  scanf("%d", &fatorial);


  for (; fatorial >= 1; fatorial--){
 
    total = total * fatorial;
  }
  printf("%d", total);
  return 0;
}




