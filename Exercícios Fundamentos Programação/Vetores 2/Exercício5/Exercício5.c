#include <stdio.h>
#include <math.h>
#include <string.h>

/*
Yuri J. Pereira
5.Criar um programa que leia uma palavra com fgets() e imprima na tela o seguinte
texto (tudo na mesma linha): “Palavra <palavra> lida com fgets()”
*/

int main(void){
	
	char palavra[100];
	
	printf("Digite uma palavra: ");
	fgets(palavra, 100, stdin);
	palavra[strcspn(palavra, "\n")]='\0';
	
	printf("Palavra <%s> lida com fgets()", palavra);
	
	return 0;
}
