#include <math.h>
#include <stdio.h>

/*
Yuri Jov�ncio Pereira

2. Construa um algoritmo que leia um vetor de 5 n�meros reais e mostre-os na
ordem inversa.
*/

int main (void){
	
	float numeros[5];
	int i;
	
	for(i=0;i<5;i++){
		printf("Insira o %i numero: ", i+1);
		scanf("%f", &numeros[i]);
		fflush(stdin);
	}
	printf("\nNumeros inseridos mas na ordem inversa:");
	
	for(i=4;i>=0;i--){
		printf("\n%i Numero lido: %.2f", i+1, numeros[i]);
	}
	
	return 0;
}
