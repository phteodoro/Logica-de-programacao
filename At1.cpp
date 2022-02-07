#include<stdio.h>
#include<stdlib.h>
main(){
	int n1, n2, soma, sub, mult, divi;
	printf("Digite um valor: ");
	scanf("%d", &n1);
	printf("Digite outro valor: ");
	scanf("%d", &n2);
	
	soma = (n1 + n2);
	sub = (n1 - n2);
	mult = (n1 * n2);
	divi = (n1 / n2);
	
	printf(" Soma: %d\n Subtracao: %d\n Multiplicacao: %d\n Divisao: %d\n", soma, sub, mult, divi);
	
	system("pause");
	
}

