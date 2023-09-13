#include <stdio.h>
#include <math.h>
#include <string.h>

/*
Yuri J. Pereira
3.Implementar um sistema de controle de estoque para uma loja de roupas utilizando vetores,
em que cada posição representa um item do estoque e o valor armazenado é a quantidade de unidades disponíveis.
*/

int main (void){
	
	int quantItens=0;
	
	printf("Insira a quantidade de itens que ha em estoque: ");
	scanf("%i", &quantItens);
	fflush(stdin);
	
	char item[quantItens][50];
	int i, unidades[quantItens];
	
	for(i=0;i<quantItens;i++){
		
		printf("Insira o nome do item %i: ", i+1);
		fgets(item[i], 50, stdin);
		item[i][strcspn(item[i], "\n")]='\0';
		fflush(stdin);
		printf("Insira a quantidade de unidades disponiveis: ");
		scanf("%i", &unidades[i]);
		fflush(stdin);
	}
	
	printf("\nItens disponiveis em estoque e quantidade:");
	
	for(i=0;i<quantItens;i++){
		printf("\n%s: %i", item[i], unidades[i]);
	}

	return 0;
}
