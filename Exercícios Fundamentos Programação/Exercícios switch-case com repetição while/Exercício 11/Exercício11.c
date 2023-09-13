#include <math.h>
#include <stdio.h>

/*
Yuri J. Pereira
11) Faça um programa que pergunte em que turno você estuda. Peça para digitar M-matutino ou V-Vespertino ou N-Noturno.
Imprima a mensagem Bom Dia!, Boa Tarde! ou Boa Noite! ou Valor Inválido!, conforme o caso.
*/

int main (void){
	
	char turno, continuar='S';
	
	printf("Turnos\nM - Matutino V - Vespertino N - Noturno\n");
	
	while(continuar=='S'){
		printf("\nInsira a letra referente ao seu turno: ");
		scanf("%c", &turno);
		fflush(stdin);
		
		switch(turno){
			case 'M':
				printf("Bom dia!");
				break;
			case 'V':
				printf("Boa tarde!");
				break;
			case 'N':
				printf("Boa noite!");
				break;
			default:
				printf("Voce inseriu um caracter invalido!!");
				break;	
		}
		printf("\n\nDeseja continuar com o programa e inserir novos dados?\nDigite 'S' para continuar ou 'N' para encerrar o programa\n");
		printf("Continuar? ");
		scanf("%c", &continuar);
		fflush(stdin);
	}
	return 0;
}
