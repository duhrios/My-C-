/* 10.	Faça um programa que receba a idade, o peso, a altura, a cor dos olhos (A – Azul, P- Preto, V- Verde e C- Castanho) e a cor dos cabelos (P – Preto, C- Castanho, L – Louro e R-Ruivo) de 20 pessoas e que calcule e mostre: A quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 quilos;
•	A média das idades das pessoas com altura inferior a 1,50;
•	A porcentagem de pessoas com olhos azuis entre a s pessoas analisadas;
•	A quantidade de pessoas ruivas que não possuem olhos azuis; */

#include <stdio.h>

int main() {
    int idade, peso;
    float altura;
    char olhos, cabelos;
    int qtdIdade50Peso60 = 0; 
    int qtdAlturaMenor150 = 0;
    int qtdOlhosAzuis = 0; 
    int qtdRuivasSemAzuis = 0;
    float somaIdadesAlturaMenor150 = 0; 
    int totalPessoas = 20;

    for (int i = 1; i <= totalPessoas; i++) {
        printf("\nDigite a idade da pessoa %d: ", i);
        scanf("%d", &idade);

        printf("Digite o peso (em quilos) da pessoa %d: ", i);
        scanf("%d", &peso);

        printf("Digite a altura (em metros) da pessoa %d: ", i);
        scanf("%f", &altura);

        printf("Digite a cor dos olhos (A - Azul, P - Preto, V - Verde, C - Castanho) da pessoa %d: ", i);
        scanf(" %c", &olhos);

        printf("Digite a cor dos cabelos (P - Preto, C - Castanho, L - Louro, R - Ruivo) da pessoa %d: ", i);
        scanf(" %c", &cabelos);

        if (idade > 50 && peso < 60) {
            qtdIdade50Peso60++;
        }
        if (altura < 1.50) {
            somaIdadesAlturaMenor150 += idade;
            qtdAlturaMenor150++;
        }
        if (olhos == 'A') {
            qtdOlhosAzuis++;
        }
        if (cabelos == 'R' && olhos != 'A') {
            qtdRuivasSemAzuis++;
        }
    }

    float mediaIdadesAlturaMenor150 = 0;
    if (qtdAlturaMenor150 > 0) {
        mediaIdadesAlturaMenor150 = somaIdadesAlturaMenor150 / qtdAlturaMenor150;
    }

    float porcentagemOlhosAzuis = (float)qtdOlhosAzuis / totalPessoas * 100;

    printf("\nQuantidade de pessoas com idade superior a 50 anos e peso inferior a 60 quilos: %d\n", qtdIdade50Peso60);
    printf("Média das idades das pessoas com altura inferior a 1,50: %.2f\n", mediaIdadesAlturaMenor150);
    printf("Porcentagem de pessoas com olhos azuis entre as pessoas analisadas: %.2f%%\n", porcentagemOlhosAzuis);
    printf("Quantidade de pessoas ruivas que não possuem olhos azuis: %d\n", qtdRuivasSemAzuis);

    return 0;
}
