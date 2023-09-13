#include <math.h>
#include <stdio.h>

/*
Yuri J. Pereira
15) Fa�a um programa que leia um n�mero inteiro entre 1 e 12 e mostre o quadrado ou o cubo do n�mero,
dependendo se ele � par ou �mpar, utilizando a estrutura switch-case.
*/

int main (void){
	
	int numero;
	float elevado;
	
	printf("Insira um numero inteiro entre 1 e 12\nO programa ira mostrar o quadrado do numero caso seja um par ou o cubo caso seja um numero impar.\n");
	printf("Insira o numero: ");
	scanf("%i", &numero);
	
	switch(numero){
		case 1:
		case 3:
		case 5:
		case 7:
		case 9:
		case 11:
			elevado=pow(numero,3); //elevado ao cubo n�meros �mpares.
			printf("\n%i elevado a potencia 3 = %.2f", numero, elevado);
			break;
		case 2:
		case 4:
		case 6:
		case 8:
		case 10:
		case 12:
			elevado=pow(numero,2); //elevado ao quadrado n�meros pares.
			printf("\n%i elevado a potencia 2 = %.2f", numero, elevado);
			break;
		default:
			printf("\nVoce Inseriu um numero invalido, sao aceitos apenas numeros entre 1 e 12.");
			break;
	}
	return 0;
}
