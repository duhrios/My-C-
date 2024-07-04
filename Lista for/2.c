#include<stdio.h>

main(){

int n, contador = 1, pares, impares;

  printf("Digite o n:");
  scanf ("%d", &n);

  printf("numeros pares:");
for (contador; contador<=n; contador++){

if (contador%2 == 0){
  pares = contador;

  printf("%d,", pares);
    }  
  }

 contador = 1;
  printf("\nnumeros Impares:");
  for (contador; contador<=n; contador++){

  if (contador%2 == 1){
    pares = contador;

    printf("%d,", pares);
      }  
    }
  return 0;
}

