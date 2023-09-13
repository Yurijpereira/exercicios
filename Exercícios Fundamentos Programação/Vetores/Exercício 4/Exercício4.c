#include <stdio.h>
#include <math.h>

/*
Yuri J. Pereira
4. Construa um algoritmo que leia um vetor de 10 caracteres, e diga quantas
consoantes foram lidas. Imprima as consoantes.
*/

int main (void){
	
	int i, quantConsoantes=0;
	char letra[10], consoantes[10];
	
	printf("Digite 10 letras para saber quantas delas sao consoantes.\n");
	
	for(i=0;i<10;i++){
	printf("\nInsira a %i letra: ", i+1);
	scanf("%c",&letra[i]);
	fflush(stdin);
	
		switch (letra[i]){
			case 'a'...'z':
			case 'A'...'Z':
				if(letra[i] != 'A' && letra[i] != 'E' && letra[i] != 'I' && letra[i] != 'O' && letra[i] != 'U' && letra[i] != 'a' && letra[i] != 'e' && letra[i] != 'i' && letra[i] != 'o' && letra[i] != 'u'){
					consoantes[quantConsoantes]=letra[i];
					quantConsoantes++;
				}
				break;
			default:
				printf("\nDigite apenas letras, outros caracteres e numeros nao sao aceitos.\n");
				i-=1;
				break;
		}
	}
	
	printf("\nForam lidas %i consoantes.", quantConsoantes);
	printf("\nConsoantes lidas: ");
	
	for(i=0;i<quantConsoantes;i++){
		printf("%c, ", consoantes[i]);
	}
	return 0;
}
