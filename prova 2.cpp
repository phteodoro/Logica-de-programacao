#include<stdio.h>
#include<stdlib.h>
main(){
	
int lucas, amanda, rodrigo,dif;

printf("Digite a sua idade Lucas: ");
scanf("%d",&lucas);
printf("Digite a sua idade Amanda: ");
scanf("%d",&amanda);
printf("Digite a sua idade Rodrigo: ");
scanf("%d",&rodrigo);


printf("A diferenca entre Lucas e Amanda e: %d anos.\n",abs(lucas - amanda));
printf("A diferenca entre Lucas e Rodrigo e: %d anos.\n",abs(lucas-rodrigo));
printf("A diferenca entre Amanda e Rodrigo e: %d anos.\n",abs(amanda-rodrigo));

	
system("pause");	
}
