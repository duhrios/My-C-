#include <stdio.h>
main (){
int op;

printf("////////////////BEM VINDO!//////////////\n");
printf("//////////Segue nosso Cardapio//////////\n");
printf("1-Bife Acebolado \n2-File de frango \n3-Vaca atolada \n4-Macarrao com almodega \n\n Digite o numero do prato para mais detalhes:");
scanf("%i", &op);

switch (op){

  case 1: 
        printf(" \nArroz, feijão, salada e bife acebolado\n\n 22,99 Reais!!");
  break;
  case 2:
        printf(" \nArroz, feijão fritas, salada e bife acebolado\n\n 19,99 Reais!!");
  break;
  case 3:
        printf(" \nArroz, feijão, salada de maionese e vaca atolada \n\n 24,99 Reais!!");
  break;
  case 4: 
        printf(" \nmacarrao com almodegua, salada de maionese e fritas \n\n 21,99 Reais!!");
  break;
  default:
        printf("Opcao invalida \ntente de novamente!!!");
  
        
}
return 0;
}