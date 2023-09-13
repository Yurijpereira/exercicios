#include <math.h>
#include <stdio.h>

/*
Yuri J. Pereira
4.Faça um programa que calcule e mostre a média bimestral da turma. O usuário deve informar a quantidade de notas, bem como cada nota.
Utilizando estrutura de repetição while.
*/

int main (void){

	int quantNotas, repeticao=1;
	float media, nota, somaNotas;
	
	printf("Digite a quantidade de notas: ");
	scanf("%i", &quantNotas);
	
	while (repeticao <= quantNotas){
		repeticao++;
		printf("Digite uma nota: ");
		scanf("%f", &nota);
		
		somaNotas+= nota;
	}
	media = somaNotas / quantNotas;
	printf("Quantidade de notas: %i\nMedia: %.2f\n", quantNotas, media);
	
	nota=0, somaNotas=0, media=0;
	
	printf("\nDigite a quantidade de notas: ");
	scanf("%i", &quantNotas);
	
	for(repeticao=1;repeticao<=quantNotas;repeticao++){
		printf("Digite uma nota: ");
		scanf("%f", &nota);
		
		somaNotas+= nota;
	}
	media = somaNotas / quantNotas;
	printf("Quantidade de notas: %i\nMedia: %.2f\n", quantNotas, media);
	
	return 0;
}
