//8.	Faça um programa que receba a idade de dez pessoas e que calcule e mostre a quantidade de pessoas com idade maior ou igual a 18 anos.

#include <stdio.h>

main() {

int pessoas, total=0, maior_idade, cont = 1;


while (cont <= 10){
  printf("Digite uma idade: ");
  scanf("%d", &pessoas);
    if (pessoas >= 18){
      maior_idade = cont;

    total ++;
    }
    cont++;
  }
  printf("Temos %d Maiores de idade", total);

  return 0;
}