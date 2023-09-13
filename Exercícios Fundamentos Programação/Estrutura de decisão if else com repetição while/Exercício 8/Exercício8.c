#include <math.h>
#include <stdio.h>

/*
Yuri J. Pereira
8) Faça um programa que leia 3 valores inteiros e exiba-os em ordem crescente.
*/

int main (void){
	
	int n1, n2, n3;
	char continuar='S';
	
	printf("Digite 3 numeros inteiros.\n");
	while(continuar == 'S'){
		printf("\nPrimeiro numero: ");
		scanf("%i", &n1);
		printf("Segundo numero: ");
		scanf("%i", &n2);
		printf("Terceiro numero: ");
		scanf("%i", &n3);
		fflush(stdin);
		
		if(n1<n2 && n1<n3){
			if(n2<n3){
				printf("\nOrdem crescente: %i, %i, %i\n", n1, n2 ,n3);
			}
			else{
				printf("\nOrdem crescente: %i, %i, %i\n", n1, n3, n2);
			}
		}
		else if(n2<n1 && n2<n3){
			if(n1<n3){
				printf("\nOrdem crescente: %i, %i, %i\n", n2, n1 ,n3);
			}
			else{
				printf("\nOrdem crescente: %i, %i, %i\n", n2, n3 ,n1);
			}
		}
		else{
			if(n1<n2){
				printf("\nOrdem crescente: %i, %i, %i\n", n3, n1 ,n2);
			}
			else{
				printf("\nOrdem crescente: %i, %i, %i\n", n3, n2 ,n1);
			}
		}
		printf("\nDeseja continuar com o programa e inserir novos dados?\nDigite 'S' para continuar ou 'N' para encerrar o programa\n");
		printf("Continuar? ");
		scanf("%c", &continuar);
		fflush(stdin);
	}
	return 0;
}
