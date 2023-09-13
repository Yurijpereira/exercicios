#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*
Yuri Jovêncio Pereira
5. Criar um programa que utilize vetores para representar uma pilha de pratos em um restaurante,
e permita adicionar ou remover pratos da pilha.
*/

int main (void){

	int maxPratos=0, i, acaoPilha=0, quantPratos=0;
	
	printf("Insira a quantidade maxima da pilha de pratos: ");
	scanf("%i", &maxPratos);
	fflush(stdin);
	
	int pilha[maxPratos];
	
	for(i=0;i<maxPratos;i++){
		pilha[i]=0;
	}
	
	while(acaoPilha!=3){
		
		printf("\n\n1 - Adicionar um prato\n2 - Remover um prato\n3 - Sair\n\nInsira a opcao: ");
		scanf("%i", &acaoPilha);
		fflush(stdin);
		
		system("cls");
		
		switch(acaoPilha){
			case 1:
				for(i=0;i<maxPratos;i++){
					if(pilha[i]==0){
						pilha[i]=1;
						quantPratos=(i+1);
						break;
					}
					else if(pilha[maxPratos-1]==1){
						printf("\nNao e possivel adicionar mais pratos a pilha. Pilha de pratos em sua capacidade maxima!\n");
					break;
					}
				}
				break;
			case 2:
				for(i=maxPratos;i>=0;i--){
					if(pilha[i]==1){
						pilha[i]=0;
						quantPratos=i;
						break;
					}
					else if(pilha[0]==0){
						printf("\nNao e possivel remover pratos. A pilha ja esta vazia.\n");
					break;
					}
				}
				break;
			case 3:
				break;
			default:
				printf("\nOpcao invalida! Insira uma opcao valida!\n");
			break;
		}
		
		printf("\nQuantidade de pratos na pilha: %i\n", quantPratos);
		
		for(i=0;i<maxPratos;i++){
			if(pilha[i]>0){
				printf(" %i |   --___--\n", i+1);
			}
			else{
				break;
			}
		}
	}
	

	return 0;
}
