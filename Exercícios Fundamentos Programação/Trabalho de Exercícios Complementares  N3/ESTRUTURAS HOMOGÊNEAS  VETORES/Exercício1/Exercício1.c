#include <math.h>
#include <stdio.h>

/*
Yuri Jovêncio Pereira

1. Construa um algoritmo que leia (scanf) um vetor de 5 números inteiros e mostre a
soma dos números e os valores do vetor. (Use forma contraída para realizar a soma).
*/

int main(void){
	
	int numeros[5], soma=0, i;
	
	for(i=0;i<5;i++){
		printf("Insira o %i numero: ", i+1);
		scanf("%i", &numeros[i]);
		fflush(stdin);
		soma+=numeros[i];
	}
	for(i=0;i<5;i++){
		printf("\n%i Numero lido: %i", i+1, numeros[i]);
	}
	printf("\nResultado da soma de todos os numeros: %i", soma);
	
	return 0;
}
