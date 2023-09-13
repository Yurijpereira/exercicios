#include <math.h>
#include <stdio.h>

/*
Yuri J. Pereira
10) Faça um programa que leia um número e exiba o dia correspondente da semana.
(1-Domingo, 2- Segunda, etc.), se digitar outro valor deve aparecer valor inválido.
*/

int main (void){
	
	char continuar='S';
	int diaSemana;
	
	printf("Dias da semana\n1-Domingo\n2-Segunda\n3-Terca\n4-Quarta\n5-Quinta\n6-Sexta\n7-Sabado\n");
	
	while(continuar == 'S'){
		printf("\nDigite um numero de 1 a 7: ");
		scanf("%i", &diaSemana);
		fflush(stdin);
		
		switch(diaSemana){
			case 1:
				printf("1 - Domingo\n");
				break;
			case 2:
				printf("2 - Segunda\n");
				break;
			case 3:
				printf("3 - Terca\n");
				break;
			case 4:
				printf("4 - Quarta\n");
				break;
			case 5:
				printf("5 - Quinta\n");
				break;
			case 6:
				printf("6 - Sexta\n");
				break;
			case 7:
				printf("7 - Sabado\n");
				break;
		 	default:
		 		printf("Sao aceitos apenas numeros entre 1 e 7\nInsira um numero valido.\n");
		 		break;
		}
		printf("\nDeseja continuar com o programa e inserir novos dados?\nDigite 'S' para continuar ou 'N' para encerrar o programa\n");
		printf("Continuar? ");
		scanf("%c", &continuar);
		fflush(stdin);
	}
	return 0;
}
