#include <stdio.h>

main(){

int op;

printf("Digite um numero de 1 a 5 e tente adivinha o numero certo:");
  scanf("%d", &op);

  switch (op){
  case 1:
      printf("Errou");
  break;
  case 2: 
      printf("Errou");
  break;
  case 3:
      printf("Errou");
  break;
  case 4:
      printf("Acertou, \nParabens!!!");
  break;
  case 5:
      printf("Errou");
  break;
  default:
        printf("Opcao invalida");

  }

  return 0;
}