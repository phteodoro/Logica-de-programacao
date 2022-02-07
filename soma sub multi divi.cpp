#include<stdio.h>
#include<stdlib.h>
main(){
int opcao,n1,n2;
do{
if(opaco > 0 || opcao < 5);
{
	printf("Digite dois numero: ");
	scanf("%d",&n1,&n2);
}	
switch(opcao)
case 0:
	printf("Saindo...");
break;

case 1:
	printf("A opcao escolhida foi de soma: %d\n", n1+n2);
break;
	
case 2:
	printf("A opcao escolhida foi de subtracao: %d\n", n1-n2);
break;
		
case 3:
	printf("A opcao escolhida foi de multiplicacao: %d\n", n1*n2);
break;
		
case 4:
	printf("A opcao escolhida foi de divisao: %d\n", n1/n2);

while(n2==0);{
printf("Nao existe divisao com o numero 0!\n Digite outro valor: ");
scanf("%d",&n2);	
}
printf("Divisao: %d \n", n1/n2);
break;
 default:
 	printf("Opcao invalida");
}
	
	
	
	system("pause");
}
