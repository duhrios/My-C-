#include<stdio.h>

main() {

float nasc, ano = 2024, idade;

printf("Em que ano nasceu:");
  scanf("%f", &nasc);

  idade = ano - nasc;

if (idade > 18) {
  printf(" voce tem: %.0f", idade);
  printf(" Anos\n Pode votar!!!");
  
} else {
  printf(" Voce tem %.0f", idade);
  printf(" Anos\n Portanto,\n Não pode votar!!!");
}
  


return 0;  
}