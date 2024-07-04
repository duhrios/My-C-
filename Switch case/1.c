#include <stdio.h>

main (){

int num1, num2;
float soma;
char op;

printf("Digite dois numeros:");
scanf("%i %i", &num1, &num2 );
printf("Digite a Operação \n( + - * / ): ");
scanf(" %c", &op);

switch (op){
  case '+': 
          soma = num1 + num2;
          printf("%.0f" , soma);
  break;
  case '-':
          soma = num1 - num2;
          printf("%.0f", soma);
  break;
  case '*':
          soma = num1 * num2;
          printf("%.0f", soma);
  break;
  case '/':
            soma = num1 / num2;
            printf("%.2f", soma);
  break;
  default:
          printf("Operecao invalida");

}

  return 0;
}
