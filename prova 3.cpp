#include<stdio.h>
#include<stdlib.h>
main(){
	float n1,n2,opcao;
do
{
			
printf("---------MENU---------\n");	
printf("[1]- Soma" );	
printf("[2]- Subtracao ");	
printf("[3]- Multiplicacao");
printf("[4]- Divisao" );	
printf("Digite uma opcao: \n");	
scanf("%d",&opcao);
printf("----------------------\n");	
//poderia colocar o WHILE pra repetir o processo. 	
//poderia usar o *system("pause");
	switch(opcao)
	{
	 case 1:
	  printf("A operacao digita eh de soma: %d",(n1+n2));
     break; 
	 
	 case 2:
	  printf("Voce se encontra em PENULTIMO da Fila de Setembro a Outubro. \n\n");
     break; 
	 
	 case 3:
	  printf("Voce se encontra no MEIO da Fila de Junho a Agosto. \n\n");
     break; 
	
	 case 4:
	  printf("Voce se encontra no INICIO da Fila de Marco a Maio. \n\n");
     break;
 		 	
	 default:
	 printf("O numero que voce digitou nao coincide com as opcoes disponiveis! \n\n");	 
	 system("pause");  	 					
	}
	printf("\n");
}while(opcao > 5);
printf("Por favor, tente novamente digitando os numeros disponiveis: ");

system("pause");	
}
