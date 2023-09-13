#include <math.h>
#include <stdio.h>

/*
Yuri J. Pereira
18) Faça um programa que leia uma letra maiúscula ou minúscula e informe se ela é uma vogal ou uma consoante.
Se o usuário digitar um número ou outro caractere não reconhecido, o programa deve informar que a entrada é inválida,
utilizando a estrutura switch-case.
*/

int main(void){
	
	char letra;
	
	printf("Digite uma letra: ");
	scanf("%c", &letra);
	
	switch(letra){
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("\nA letra digitada e uma vogal.");
			break;
		default:
			if((letra >= 'A' && letra <= 'Z') || (letra >= 'a' && letra <= 'z')){
				printf("\nA letra digitada e uma consoante.");
			}
			else{
				printf("\nEntrada invalida!!!");
			}
			break;
	}
	return 0;
}
