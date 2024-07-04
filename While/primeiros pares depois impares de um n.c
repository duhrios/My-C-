/* 2.	Faça um programa que leia um número n e mostre na tela os n primeiros números pares e depois os n primeiros números ímpares. */

#include <stdio.h>

main (){

int contador_par=0,contador_impar = 0, n;

  printf("Digite o Numero:");
  scanf("%d", &n);

while (contador_par < n){
  if ( contador_par == 0){
    printf("\n Numeros par:");
    printf("\n%d", contador_par);
  }
  else if (contador_par % 2 == 0){
    printf("\n%d", contador_par);
      }
  contador_par++;
    }

  while (contador_impar < n){
    if ( contador_impar == 0){
      printf("\n Numeros impar:");
    }
    else if (contador_impar % 2 == 1){
      printf("\n%d", contador_impar);
        }
    contador_impar++;
      }
  
  
  return 0;
}