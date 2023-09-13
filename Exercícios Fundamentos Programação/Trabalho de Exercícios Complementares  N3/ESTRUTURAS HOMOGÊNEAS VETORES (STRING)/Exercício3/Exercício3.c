#include <stdio.h>
#include <math.h>
#include <string.h>

/*
Yuri J. Pereira
3. Faça um programa que possua um vetor de caracteres (aka. String) com 7 posições e valor inicial a palavra “OLA”.
O programa deve executar os seguintes passos:

(a) Atribua manualmente um a um estes valores ao vetor: ‘b’, ‘r’, ‘a’, ‘s’, ‘i’, ‘l’,’\0’.

(b) Mostre na tela a palavra/vetor, utilizando WHILE() para imprimir letra por letra da palavra

(c) Converta a palavra para maiúsculo utilizando valores TABELA ASCII

Tabela ASCII: https://www.ime.usp.br/~pf/algoritmos/apend/ascii.html

(d) Substitua as letras ‘A’ pelo número 4 e “I’ pelo número 1

(e) Exclua a última letra da palavra, utilizando caractere terminador (identifica o final da String)

(f) Calcule o tamanho preenchido do Vetor (Tamanho da palavra), percorrendo-a com FOR

(g) Leia (scanf) duas letras juntas (ex: “R4” em “BR4S1L”) e informe se encontrou ou não
*/

int main(void){
	
	char palavra[3]={'O', 'L', 'A'};
	
	printf("Vetor de caracteres (aka. String) valor inicial: %s\n", palavra);
	
	//a
	palavra[0]='b';
	palavra[1]='r';
	palavra[2]='a';
	palavra[3]='s';
	palavra[4]='i';
	palavra[5]='l';
	palavra[6]='\0';
	
	printf("\nString com os novos valores atribuidos: %s\n", palavra);
	
	//b
	int i=0;
	
	printf("\nString letra por letra com a utilizacao de while: \n");
	
	while(i<6){
		printf("%c\n", palavra[i]);
		i++;
	}
	
	//c
	for(i=0;i<6;i++){
		palavra[i]-=32;
	}
	
	printf("\nString convertida para letras maiusculas com a utilizacao dos valores da tabela ASCII: %s\n", palavra);
	
	//d
	for(i=0;i<6;i++){
		if(palavra[i]=='A'){
			palavra[i]='4';
		}
		else if(palavra[i]=='I'){
			palavra[i]='1';
		}
	}
	
	printf("\nString com letra 'A' substituida por 4 e 'I' por 1: %s\n", palavra);
	
	//e
	for(i=0;i<7;i++){
		if(palavra[i]=='\0'){
			palavra[i-1]='\0';
		}
	}
	
	printf("\nString com a ultima letra excluida: %s\n\n", palavra);
	
	//f
	int tamanhoString=0;
	
	for(i=0;i<5;i++){
		if(palavra[i]!='\0'){
			tamanhoString++;
			printf("%i- %c\n", i+1, palavra[i]);
		}
		else{
			break;
		}
	}
	
	printf("\nTamanho da string lida com a utilizacao de for: %i\n", tamanhoString);
	
	//g
	char busca[2];
	
	printf("\nInsira duas letras juntas para verificar se encontrou ou nao na string: ");
	fgets(busca, 3, stdin);
	busca[strcspn(busca, "\n")] = '\0';
	fflush(stdin);
	
	int encontrou;
	
	for(i=0;i<6;i++){
		
		if(palavra[i]==busca[0]){
			if(busca[1]==palavra[i+1]){
				encontrou=1;
				break;
			}
		}
	}

	if(encontrou==1){
		printf("\nAs duas letras foram encontradas juntas na string.");
	}
	else{
		printf("\nAs duas letras nao foram encontradas juntas na string.");
	}
	
	return 0;
}
