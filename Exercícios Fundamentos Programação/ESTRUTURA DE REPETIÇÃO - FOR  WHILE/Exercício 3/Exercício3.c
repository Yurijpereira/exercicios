#include <math.h>
#include <stdio.h>

/*
Yuri J. Pereira
3.Fa�a um programa que leia dez n�meros inteiros e calcule a diferen�a entre o maior e o menor n�mero do conjunto.
Utilizando estrutura de repeti��o while e for.
*/

int main (void){

	int maior, menor, numero, i, i2, maior2, menor2, numero2;
	
	for(i=0; i<10; i++){
		printf("Digite um n�mero: ");
		scanf("%i", &numero);
		
		if (i == 0){
			maior = numero;
			menor = numero;
		}
		if (numero > maior){
			maior = numero;
		}
		if (numero < menor){
			menor = numero;
		}
	}
	printf("A diferenca entre o maior numero e o menor eh: %i\n", maior-menor);

	while(i2<10){
		i2++;
		printf("Digite um n�mero: ");
		scanf("%i", &numero2);
		
		if (i == 0){
			maior2 = numero2;
			menor2 = numero2;
		}
		if (numero2 > maior2){
			maior2 = numero2;
		}
		if (numero2 < menor2){
			menor2 = numero2;
		}
	}
	printf("A diferenca entre o maior numero e o menor eh: %i", maior2-menor2);
	 
	return 0;
}
