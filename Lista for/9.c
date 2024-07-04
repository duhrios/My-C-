/* 9.	Faça um programa que receba a idade, altura e o peso de 25 pessoas, Calcule e mostre:
•	A quantidade de pessoas com idade superior a 50 anos;
•	A média das Alturas das pessoas com idade entre 10 e 20 anos
•	A porcentagem das pessoas com peso inferior a 40 quilos entre todas as pessoas analisadas. */ 

#include <stdio.h>

main(){

int idade, idade_superior = 1, contador = 1; 
  
int soma_altura, altura_10_20 = 1;

int peso, peso_40 = 1;

float media_altura, altura, porcetagem_peso;


for (contador; contador <= 25; contador ++) {
  printf("Pessoa %d" , contador);
  
  printf("\nDigite a idade: ");
  scanf("%d", &idade); 
  
  printf("Digite a altura:");
  scanf("%f", &altura);
  
  printf("Digite a peso:");
  scanf("%d", &peso);

   if (idade > 50){
    idade_superior ++;
    }

  if (idade >= 10 && idade <= 20) {
    altura_10_20++;
    soma_altura += altura;
   }
  if (peso <=40 ){

    peso_40 ++;

    }
    
  }

  media_altura = soma_altura / altura_10_20;
  porcetagem_peso = (peso_40 / contador)*100;

  
  
  
  printf("Quantidade de pessoas com idade superior a 50 é: %d", idade_superior);

  printf("\nAltura media das pessoas entre 10 e 20 eh: %.2f", media_altura);

  printf(" \nA porcetagem dos  das pessoas com peso inferior a 40 são: %.2f", porcetagem_peso);

 return 0; 
}
