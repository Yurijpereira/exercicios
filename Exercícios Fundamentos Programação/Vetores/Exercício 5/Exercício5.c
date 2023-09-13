#include <stdio.h>
#include <math.h>

/*
Yuri J. Pereira
5. Construa um algoritmo que leia um vetor de 15 palavras e mostre-os na ordem
inversa.
*/

int main (void){
	
	char palavra[15][100];
	int i;
	
	printf("De entrada de 15 palavras para que ao final do programa voce veja elas em ordem inversa.\n");
	
	for(i=0;i<15;i++){
		printf("\nDigite a %i palavra: ", i+1);
		scanf("%s", &palavra[i]);
		fflush(stdin);
	}
	
	printf("\nNa ordem inversa: ");
	
	for(i=14;i>=0;i--){
		printf("\nPalavra %i: %s", i+1, palavra[i]);
	}
	return 0;
}
