#include <stdio.h>
#include <math.h>
#include <string.h>

/*
Yuri J. Pereira
4. Criar um programa que leia uma frase em uma string S[] (use gets(), scanf([] ou fgets()).
Para as questões abaixo, NÃO devem ser usada funções prontas do C.

a. Faça uma busca por uma palavra ou parte dela (sub-string) dentro da string S e retorne se encontrou ou não como resultado
(mesma lógica da letra “g” da questão 3).

b. Calcule e exiba o tamanho/quantidade de caracteres da frase/String (mesma lógica da letra “f” da questão 3).

c. Informe uma segunda frase e faça a comparação se a frase é igual à frase contida na string S.

d. Substitua o valor da string S por “catolica” (não fucionará S = “catolica”, então deverá substituir letra a letra através e adicionar ‘\0’ ao final.
Após, testar o tamanho da nova string com a lógica da letra “b”.
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
