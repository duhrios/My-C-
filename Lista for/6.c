// 6.	Faça um programa que receba um número e usando laços de repetição calcule e mostre a tabuada desse número.

#include <stdio.h>

main(){

int cont =1;
int n,mult;

printf("Digite o numero da tabuada: ");
scanf("%d", &n);

for (cont;cont <=10;cont++){
  mult = n*cont;
  printf("\n%dx%d = %d", n , cont, mult);
  }
return 0;
}