#include <stdio.h>

main() {

char nt;

printf("Digite sua nota em letra:");
scanf("%c", &nt);

switch (nt){

  case 'a':
        printf("Excelente");
  break;
  case 'b':
        printf("Bom");
  break;
  case 'c':
        printf("satisfatorio:");
  break;
  case 'd':
        printf("Insuficiente");
  break;
  case 'f':
        printf("Falha");
  break;
  default:
        printf("Nota invalida!!!");
  
}

 return 0;
}
