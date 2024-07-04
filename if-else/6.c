#include<stdio.h>

 main(void){
    
float altura, resul, escolha;

printf("Digite agora sua altura: ");
scanf("%f", &altura);
printf("Voce eh homem ou mulher?");
printf("\n Se for Mulher digita 1 ");
printf("\n Se for Homem, digita 2 ");
printf("\nPode digitar:");
scanf ("%f" , &escolha);


if (escolha == 1){
   resul= (62.1 * altura)-44.7;
   printf (" Seu peso ideal eh: %2.f ", resul);

} else if (escolha == 2 ) {
   resul = (72.7 * altura) - 58;
   printf (" Seu peso ideal eh: %.2f ", resul);  

} else {
printf (" Opcao invalida");
}



    
    
    return 0;
}
