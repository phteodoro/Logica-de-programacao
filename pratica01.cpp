#include<stdio.h>
#include<stdlib.h>
main(){
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);
    if(x % 2 == 0){
       printf("Numero e par.\n\n");
    }else{
    	printf("Numero e impar.\n\n");
	}	   
      
	system("pause");
}


