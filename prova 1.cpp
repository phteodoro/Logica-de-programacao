#include<stdio.h>
#include<stdlib.h>
main(){
	
int n;
printf("Digite um numero: \n");
scanf("%d",&n);
if(n % 2 == 0)
{
 printf("Numero par.\n");
}else{
	printf("Numero impar.\n");
}
if(n >= 0)
{
	printf("E numero positivo.\n");
}else{
	printf("E numero negativo.\n");
}

	
system("pause");	
}
