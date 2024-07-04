#include<stdio.h>

main(){

float pf, quant;

printf("Digite quantas maças vai querer: ");
scanf("%f", &quant);

  if (quant >= 12 ){
    (pf = quant*0.25);
    printf("O valor a pagar eh %2.f ", pf);
    printf("R$");
    
  }else {
    (pf = quant * 0.30);
    printf("O valor a pagar eh %f: ", pf);
    printf("Reais");
  }
  
}