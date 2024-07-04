//8.	Faça um programa que receba a idade de dez pessoas e que calcule e mostre a quantidade de pessoas com idade maior ou igual a 18 anos.

#include <stdio.h>

main() {

int pessoas, total=0, maior_idade, cont = 1;


for (cont; cont <= 10; cont++){
  printf ("Pessoa %d",cont);
  printf("\nDigite uma idade: ");
  scanf("%d", &pessoas);
    if (pessoas >= 18){
      maior_idade = cont;
    
    total ++;
    }

  }
  printf("Temos %d Maiores de idade", total);
  
  return 0;
}