// 6.	Faça um programa que receba um número e usando laços de repetição calcule e mostre a tabuada desse número.

#include <stdio.h>

main(){

int cont =1;
int n,mult;

printf("Digite o numero da tabuada: ");
scanf("%d", &n);

while (cont <=10){
  mult = n*cont;
  printf("\n%dx%d = %d", n , cont, mult);
  cont++;
}
return 0;
}