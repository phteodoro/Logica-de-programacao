#include<stdio.h>
#include<stdlib.h>
main(){
	float divida, salario, saldo;
	printf("Digite seu salario: ");
	scanf("%f", &salario);
	printf("Digite quanto esta devendo: \n");
	scanf("%f", &divida);
	
	saldo= salario - divida;
	
	printf("Seu saldo apos pagar a divida e: %.2f reais\n\n", saldo);
	system("pause");
	
	
}
