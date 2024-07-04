#include <stdio.h>

main(){

char multiplicacao = '*', adcao = '+', subtracao = '-', divisao = '/' ;

char Continuar = 's', sair = 'n', contador = 's', op, op_sn;

float numero_1, numero_2, total;

printf("Calculadora!");


do {
  contador = op_sn;
  printf("\nDigite a operacao: \nExemplo(+, -, *, /) \nDigite:" );
  scanf("%c", &op);
  printf("\nDigite o primeiro numero:  " );
  scanf("%f", &numero_1 );
  printf("\nDigite o segundo numero:  " );
  scanf("%f", &numero_2);

  if (op == adcao){
    total = numero_1 + numero_2;
    printf("O valor eh: %.0f", total );

  } else if (op == multiplicação ){
    total = numero_1 * numero_2;
    printf("O valor eh: %.2f", total );
    } else if (op == divisao){
    total = numero_1 / numero_2;
    printf("O valor eh: %.2f", total );
    } else if (op == subtracao) {
    total = numero_1 - numero_2;
    printf("O valor eh: %.0f", total );
    }
  else{
  printf("opçao invalida!!!");    
  }
  
  printf(" \nDeseja continuar? \n(s/n): ");
  scanf(" %c ", &op_sn);

    
} while (op_sn != 'n' );

printf("Obrigado!!!");
}