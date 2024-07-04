#include <stdio.h>

int main() {
    char op;

    printf("Qual estado se encontra o sinal?:\n");
    printf("1 - Vermelho\n");
    printf("2 - Amarelo\n");
    printf("3 - Verde:\n");

    
    scanf(" %c", &op); 

    switch (op) {
        case '1':
            printf("Prossiga!\n");
            break;
        case '2':
            printf("Atenção!\n");
            break;
        case '3':
            printf("PARE!\n");
            break;
        default:
            printf("Erro: Sinal inválido.\n");
    }

    return 0;
}