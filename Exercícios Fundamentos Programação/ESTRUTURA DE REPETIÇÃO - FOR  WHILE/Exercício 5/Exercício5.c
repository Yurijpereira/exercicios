#include <math.h>
#include <stdio.h>

/*
Yuri J. Pereira
5.Fa�a um programa que calcule o n�mero m�dio de alunos por turma.
Para isto, pe�a a quantidade de turmas e a quantidade de alunos para cada turma.
As turmas n�o podem ter mais de 40 alunos.
Utilizando estrutura de repeti��o while e for.
*/

int main (void){
	
	int quantTurmas, alunos, quantAlunos, repeticao=1;
	float media;
	
	printf("Digite a quantidade de turmas: ");
	scanf("%i", &quantTurmas);
	printf("Capacidade maxima de 40 alunos por turma.\n");
	
	while(repeticao <= quantTurmas){
		repeticao++;
		printf("Digite a quantidade de alunos na turma: ");
		scanf("%i", &alunos);
		
		if(alunos>40){
			printf("A capacidade maxima eh de 40 alunos por turma\nInicie o programa novamente e insira um numero de alunos valido!!!");
			return 0;
		}
		else{
			quantAlunos+=alunos;
		}
	}
	media=quantAlunos/quantTurmas;
	printf("Quantidade de turmas: %i\nMedia de alunos por turma: %.2f\n", quantTurmas, media);
	
	alunos=0, quantAlunos=0, media=0;
	
	printf("\nDigite a quantidade de turmas: ");
	scanf("%i", &quantTurmas);
	printf("Capacidade maxima de 40 alunos por turma.\n");
	
	for(repeticao=1;repeticao<=quantTurmas;repeticao++){
		printf("Digite a quantidade de alunos na turma: ");
		scanf("%i", &alunos);
		
		if(alunos>40){
			printf("A capacidade maxima eh de 40 alunos por turma\nInicie o programa novamente e insira um numero de alunos valido!!!");
			return 0;
		}
		else{
			quantAlunos+=alunos;
		}
	}
	media=quantAlunos/quantTurmas;
	printf("Quantidade de turmas: %i\nMedia de alunos por turma: %.2f\n", quantTurmas, media);
	return 0;
}
