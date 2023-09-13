#include <math.h>
#include <stdio.h>

/*
Yuri J. Pereira
13) Faça um programa que leia a idade de quatro alunos e apresente a mensagem conforme instruções:
a) Se a média de idade dos alunos é inferior de 25, apresentar a mensagem "Turma Jovem";
b) Se a média de idade dos alunos é entre 25 e 40, apresentar a mensagem "Turma Adulta";
c) Se a média de idade dos alunos é acima de 40 anos, apresentar a mensagem "Turma Idosa".
*/

int main (void){
	
	char continuar='S';
	int idade1, idade2, idade3, idade4, mediaInt;
	float media;
	
	printf("Insira a idade de quatro alunos\n");
	while(continuar=='S'){
		printf("\nIdade aluno 1: ");
		scanf("%i", &idade1);
		printf("Idade aluno 2: ");
		scanf("%i", &idade2);
		printf("Idade aluno 3: ");
		scanf("%i", &idade3);
		printf("Idade aluno 4: ");
		scanf("%i", &idade4);
		fflush(stdin);
		
		media=(idade1+idade2+idade3+idade4)/4;
		mediaInt=media;
		
		switch(mediaInt){
			case 0 ... 24:
				printf("A media de idade dos alunos e: %.2f\nTurma Jovem!", media);
				break;
			case 25 ... 40:
				printf("A media de idade dos alunos e: %.2f\nTurma Adulta!", media);
				break;
			case 41 ... 200:
				printf("A media de idade dos alunos e: %.2f\nTurma Idosa!", media);
				break;
			default:
				printf("Valor invalido!");
				break;
		}
		printf("\n\nDeseja continuar com o programa e inserir novos dados?\nDigite 'S' para continuar ou 'N' para encerrar o programa\n");
		printf("Continuar? ");
		scanf("%c", &continuar);
		fflush(stdin);
	}
	return 0;
}
