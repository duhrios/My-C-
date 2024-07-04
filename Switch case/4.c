#include<stdio.h>

main() {
int op;
float f,c;
printf("Qual será a coversao? \n        Digite  \n1-celsius para fahrenheit \n2-fahrenheit para celsius \n:");
scanf("%d", &op);

switch (op){
  case 1: 
        printf("Digite o celsius:");
        scanf("%f", &c);
        f= (c * 1.8)+ 32;
        printf("fahrenheit: %.2f", f);
  break;
  case 2:
      printf("Digite o farenheit:");
  scanf("%f", &f);
  c = (f-32)/1.8;
  printf("celsius: %.2f", c);
}
  
  return 0;
}

