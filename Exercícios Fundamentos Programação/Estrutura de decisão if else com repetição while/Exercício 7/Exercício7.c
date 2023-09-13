#include <math.h>
#include <stdio.h>

/*
Yuri J. Pereira
7) Faça um programa que verifique se uma letra digitada é vogal ou consoante.
*/

int main (void){
	
	char letra, continuar='S';
	
	while(continuar == 'S'){
		printf("\nInsira uma letra para verificar se ela eh vogal ou consoante\n");
		printf("Letra: ");
		scanf("%c", &letra);
		fflush(stdin);
		
		if(letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' || letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
			printf("\nA letra digitada eh uma vogal.\n");
		}
		else{
			printf("\nA letra digitada eh uma consoante.\n");
		}
		printf("\nDeseja continuar com o programa e inserir novos dados?\nDigite 'S' para continuar ou 'N' para encerrar o programa\n");
		printf("Continuar? ");
		scanf("%c", &continuar);
		fflush(stdin);
	}
	return 0;
}
