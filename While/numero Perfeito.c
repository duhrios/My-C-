/* 3.	Dado um número n inteiro e positivo, dizemos que n é perfeito se n for igual à soma de seus divisores positivos diferentes de n. Construa um programa em C que verifica se um dado número é perfeito. Ex: 6 é perfeito, pois 1+2+3 = 6. */

#include <stdio.h>

int main() {
  int n, i = 1, soma = 0;

  printf("Digite um número: ");
  scanf("%d", &n);

  while( i < n) {
    if (n % i == 0) {
      soma += i;
      i++;
    }
  }

  if (soma == n) {
    printf("%d é um número perfeito\n", n);
  } else {
    printf("%d não é perfeito\n", n);
  }

  return 0;
}