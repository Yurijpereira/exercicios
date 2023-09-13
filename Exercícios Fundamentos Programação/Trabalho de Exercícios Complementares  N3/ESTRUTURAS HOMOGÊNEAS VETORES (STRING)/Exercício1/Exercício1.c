#include <stdio.h>
#include <math.h>
#include <string.h>

/*
Yuri J. Pereira
1. Criar um programa que armazene o nome e a idade de uma lista de pessoas em vetores,
e calcule a média de idade da lista. (ex: nomes[5][30] –> vetor de 5 nomes)
*/

int main (void){
	
	char nome[3][50];
	int idade[3], i;
	float media=0, soma=0;
	
	for(i=0;i<3;i++){
		printf("\nInsira o %i nome: ", i+1);
		fgets(nome[i], 50, stdin);
		nome[i][strcspn(nome[i], "\n")] = 0;
		printf("Insira a idade: ");
		scanf("%i", &idade[i]);
		fflush(stdin);
		soma+=idade[i];
	}
	
	media=(float)soma/3;
	
	for(i=0;i<3;i++){
		printf("\nNome: %s", nome[i]);
		printf("\nIdade: %i", idade[i]);
	}
	
	printf("\n\nMedia de idades: %.2f", media);
	
	
	return 0;
}
