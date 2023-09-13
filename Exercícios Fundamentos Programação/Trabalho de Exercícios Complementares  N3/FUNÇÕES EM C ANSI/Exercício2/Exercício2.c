#include <stdio.h>
#include <math.h>

/*
Yuri J. Pereira
2. Faça uma função que desenhe linhas de caracteres na tela, a função receberá como argumento o tipo de caractere,
a quantidade de caracteres por linha a ser impressa e o número de linhas que deverá imprimir.

Ex: (c = ‘a’, qtd_caracteres=30, num_linhas = 2):
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
*/

char quantLinhas(int numLinhas);
void exibeLinha(char c, int quant);


int main(void){
	
	char caractere;
	int linhas, i, quantCaracteres=0;
	
	printf("Digite o tipo de caractere: ");
	scanf("%c", &caractere);
	printf("Digite a quantidade de linhas: ");
	scanf("%i", &linhas);
	printf("Digite a quantidade de caracteres por linha: ");
	scanf("%i", &quantCaracteres);
	
	for (i=0;i<linhas;i++) {
		exibeLinha(caractere, quantCaracteres);
	}
	
	return 0;
}
	
	
void exibeLinha(char c, int quant) {
	int i = 0;
	
	for (i=0;i<quant;i++) {
		printf("%c",c);
	}
	printf("\n");
}
	
	
char quantLinhas(int numLinhas){
	int i;
	
	for(i=0;i<numLinhas;i++){
		return '\n';
	}
}
