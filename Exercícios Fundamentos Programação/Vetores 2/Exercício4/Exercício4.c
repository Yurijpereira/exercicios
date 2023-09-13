#include <stdio.h>
#include <math.h>
#include <string.h>

/*
Yuri J. Pereira
4.Criar um programa que leia três palavras em 1 vetor e calcule e exiba
o tamanho/quantidade de caracteres delas.
*/

int main(void){
	
	char palavras[3][50];
	int i;
	
	for(i=0;i<3;i++){
		
		printf("Digite a %i palavra: ", i+1);
		scanf("%s", &palavras[i]);
		fflush(stdin);
		
		size_t tamanho = strlen(palavras[i]);
		printf("Tamanho/quantidade de caracteres da string: %zu\n\n", tamanho);
	}
	return 0;
}
