#include <stdio.h>
#include <math.h>

/*
Yuri J. Pereira
1. Fa�a um programa que leia (scanf) um n�mero, passe este n�mero como par�metro para uma fun��o que
retorne 0 se o n�mero for par ou 1 se o n�mero for �mpar.
*/

int parOuImpar(int n1);

int main(void){
	
	int numero=0;
	
	printf("Se o numero inserido for par a funcao retornara 0, se for impar retornara 1.\n\n");
	
	printf("Insira um numero: ");
	scanf("%i", &numero);
	
	printf("Valor retornado pela funcao: ");
	printf("%i", parOuImpar(numero));
	
	return 0;
}

int parOuImpar(int n1){
	if(n1%2==0){
		return 0;
	}
	else{
		return 1;
	}
}
