#include <math.h>
#include <stdio.h>

/*
Yuri J. Pereira
18) Fa�a um programa que leia uma letra mai�scula ou min�scula e informe se ela � uma vogal ou uma consoante.
Se o usu�rio digitar um n�mero ou outro caractere n�o reconhecido, o programa deve informar que a entrada � inv�lida,
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
