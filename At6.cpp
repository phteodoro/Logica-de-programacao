#include<stdio.h>
#include<stdlib.h>
main(){
 float gas, consu, dist, custo;
 printf("Infomer o valor da gasolina: \n");
 scanf("%f", &gas);
 printf("Qual a distancia voce percorrera: \n");
 scanf("%f", &consu);
 printf("Quantos km seu carro faz com 1 litro: \n");
 scanf("%f", &dist);
 
 custo = (gas / consu) * dist;
 
 printf("O consumo medio sera: %.2f \n", consu);	
	
system("pause");	
}
