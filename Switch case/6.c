#include <stdio.h>

main () {

int op;

printf("Digite um numeoro de 1 a 7:");
scanf("%d" , &op);

switch (op){
  case 1:
      printf("Domingo");
  break;
  case 2:
        printf("Segunda");
  break;
  case 3:
        printf("Terça");
  break;
  case 4:
        printf("Quarta");
  break;
  case 5:
        printf("Quinta");
  break;
  case 6:
        printf("Sexta");
  break;
  case 7:
        printf("Sabado");
  break;
  default:
        printf("Numero invalido");
    
}
return 0;
}