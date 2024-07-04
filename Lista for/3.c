  #include <stdio.h>

  int main() {
    int n, i, soma = 0;

    printf("Digite um número: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++) {
      if (n % i == 0) {
        soma += i;
      }
    }

    if (soma == n) {
      printf("%d é um número perfeito\n", n);
    } else {
      printf("%d não é perfeito\n", n);
    }

    return 0;
  }