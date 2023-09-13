#include <math.h>
#include <stdio.h>

/*
Yuri J. Pereira
16) Fa�a um programa que leia um caractere e verifique se � uma letra mai�scula,
min�scula ou um n�mero, utilizando a estrutura switch-case.
*/

int main (void){
	
	char entrada;
	
	printf("Insira um numero ou uma letra: ");
	scanf("%c", &entrada);
	
	switch(entrada){
		case 'a'...'z':
			printf("\nO caracter digitado e uma letra minuscula.");
			break;
		case 'A'...'Z':
			printf("\nO caracter digitado e uma letra maiuscula.");
			break;
		case '0'...'9':
			printf("\nO caracter digitado e um Numero.");
			break;
		case '-':
			printf("\nO caracter digitado e um Numero negativo ou eh o operador aritmetico de subtracao.");
			break;
		default:
			printf("\nErro!!");
			break;
	}
	return 0;
}
