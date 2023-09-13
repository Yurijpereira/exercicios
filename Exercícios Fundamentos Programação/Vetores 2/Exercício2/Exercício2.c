#include <stdio.h>
#include <math.h>

/*
Yuri J. Pereira
2.Desenvolver um programa que utilize vetores para armazenar as notas de alunos em uma turma de uma escola,
e calcule a média das notas da turma e a quantidade de alunos que ficaram acima da média.
*/

int main (void){
	
	int quantAlunos=0, i, acimaMedia=0;
	
	printf("Insira quantos alunos tem na turma: ");
	scanf("%i", &quantAlunos);
	fflush(stdin);
	
	float notas[quantAlunos], somaNotas=0, media=0;
	
	for(i=0;i<quantAlunos;i++){
		
		printf("\nInsira a nota do %i aluno: ", i+1);
		scanf("%f", &notas[i]);
		fflush(stdin);
		
		if (notas[i] >= 0 && notas[i] <= 10) {
            somaNotas+= notas[i];

            if (notas[i] >= 6) {
                acimaMedia++;
            }
        } else {
            printf("\nSao aceitas apenas notas entre 0 e 10\nInsira uma nota valida.\n");
            i-=1;
        }
	}
	
	media=somaNotas/quantAlunos;
	
	for(i=0;i<quantAlunos;i++){
		printf("\nNota aluno %i: %.2f", i+1, notas[i]);
	}
	printf("\n\nQuantidade de alunos: %i", quantAlunos);
	printf("\nMedia da turma: %.2f", media);
	printf("\nQuantidade de alunos que ficaram acima da media: %i", acimaMedia);
	
	return 0;
}
