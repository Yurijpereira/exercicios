#include <stdio.h>
#include <math.h>
#include <string.h>

/*
Yuri J. Pereira
4. Criar um programa que leia uma frase em uma string S[] (use gets(), scanf([] ou fgets()).
Para as quest�es abaixo, N�O devem ser usada fun��es prontas do C.

a. Fa�a uma busca por uma palavra ou parte dela (sub-string) dentro da string S e retorne se encontrou ou n�o como resultado
(mesma l�gica da letra �g� da quest�o 3).

b. Calcule e exiba o tamanho/quantidade de caracteres da frase/String (mesma l�gica da letra �f� da quest�o 3).

c. Informe uma segunda frase e fa�a a compara��o se a frase � igual � frase contida na string S.

d. Substitua o valor da string S por �catolica� (n�o fucionar� S = �catolica�, ent�o dever� substituir letra a letra atrav�s e adicionar �\0� ao final.
Ap�s, testar o tamanho da nova string com a l�gica da letra �b�.
*/

int main(void){
	
	char S[1][100];
	
	printf("Insira uma frase: ");
	fgets(S[0], 100, stdin);
	S[0][strcspn(S[0], "\n")] = '\0';
	
	//a
	
	//b
	int tamanhoString=0, i;
	
	for(i=0;i<100;i++){
		if(S[0][i]!='\0'){
			tamanhoString++;
			printf("%i- %c\n", i+1, S[0][i]);
		}
		else{
			break;
		}
	}
	
	printf("Total de caracteres da string: %i", tamanhoString);
	
	//c
	char segundaFrase[1][100];
	
	printf("Insira uma frase: ");
	fgets(segundaFrase[0], 100, stdin);
	segundaFrase[0][strcspn(S[0], "\n")] = '\0';
	
	for(i=0;i<100;i++){
		if()
	}
	
	
	
	
	return 0;
}
