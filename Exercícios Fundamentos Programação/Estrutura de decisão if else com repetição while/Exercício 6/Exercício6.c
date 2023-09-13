#include <math.h>
#include <stdio.h>

/*
Yuri J. Pereira
6) Faça um programa que verifique se a letra digitada for: F ou M e imprima uma mensagem: masculino, feminino ou indefinido/outros.
*/

int main (void){
	
	char genero, continuar='S';
	
	printf("Generos\nMasculino 'M'\nFeminino 'F'\nIndefinido/Outros 'Qualquer outro caracter'\n");
	while(continuar == 'S'){
		printf("\nGenero: ");
		scanf("%c", &genero);
		fflush(stdin);
		
		if(genero == 'M'){
			printf("Masculino.\n");
		}
		else if(genero == 'F'){
			printf("Feminino.\n");
		}
		else{
			printf("Indefinido/Outros.\n");
		}
		printf("\nDeseja continuar com o programa e inserir novos dados?\nDigite 'S' para continuar ou 'N' para encerrar o programa\nContinuar? ");
		scanf("%c", &continuar);
		fflush(stdin);
	}
	return 0;
}
