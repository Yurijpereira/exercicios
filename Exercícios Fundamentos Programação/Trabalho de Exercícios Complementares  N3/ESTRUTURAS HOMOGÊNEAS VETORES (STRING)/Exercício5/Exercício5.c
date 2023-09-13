#include <stdio.h>
#include <math.h>
#include <string.h>

/*
Yuri J. Pereira
5. Criar um programa que leia uma palavra[20] com fgets(), guarde na vari�vel palavra e imprima na tela o seguinte texto (tudo na mesma linha):
Sa�da ----> �Palavra <palavra> lida com fgets()�.
(dica: Ser� necess�rio retirar o �\n� ao final da vari�vel <palavra>).
*/

int main (void){
	
	char palavra[20];
	
	printf("Insira uma palavra: ");
	fgets(palavra, 20, stdin);
	palavra[strcspn(palavra, "\n")] = '\0';
	
	printf("Palavra <%s> lida com fgets().", palavra);
	
	return 0;
}
