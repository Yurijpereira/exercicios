#include <math.h>
#include <stdio.h>

/*
Yuri J. Pereira
9) Faça um programa que peça três notas de um aluno e calcule a média. Analisar a média e imprimir uma das mensagens a seguir:
a) A mensagem "Aprovado", se a média for maior ou igual a 7, com a respectiva média alcançada;
b) A mensagem "Reprovado", se a média for menor do que 7, com a respectiva média alcançada;
c) A mensagem "Aprovado com Distinção", se a média for igual a 10.
*/

int main (void){
	
	char continuar='S';
	float nota1, nota2, nota3, media;
	
	while(continuar == 'S'){
		printf("\nInsira 3 notas para que o programa calcule a media aritmetica simples do aluno.\n");
		printf("Insira a primeira nota: ");
		scanf("%f", &nota1);
		printf("Insira a segunda nota: ");
		scanf("%f", &nota2);
		printf("Insira a terceira nota: ");
		scanf("%f", &nota3);
		fflush(stdin);
		
		media=(nota1+nota2+nota3)/3;
		
		if(nota1>=0 && nota1<=10 && nota2>=0 && nota2<=10 && nota3>=0 && nota3<=10){
			if(media==10){
				printf("\nMedia: %.2f Aprovado com Distincao, Parabens!!!", media);
			}
			else if(media>=7){
				printf("\nMedia: %.2f Aprovado!!!", media);
			}
			else{
				printf("\nMedia: %.2f Reprovado!!!", media);
			}
		}
		else{
			printf("\nSao aceitas apenas notas entre 0 e 10\nInsira valores validos.");
		}
		printf("\n\nDeseja continuar com o programa e inserir novos dados?\nDigite 'S' para continuar ou 'N' para encerrar o programa\n");
		printf("Continuar? ");
		scanf("%c", &continuar);
		fflush(stdin);
	}
	return 0;
}
