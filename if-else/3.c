#include <stdio.h>
 
 main() { 
  int senha;

  printf("Digite sua senha:");
  scanf("%d" , &senha);

   if (senha == 1234 ) {
     printf("ACESSO PERMITIDO!");
   } else {
     printf("ACESSO NEGADO!!!");
   }


   
  return 0;
}