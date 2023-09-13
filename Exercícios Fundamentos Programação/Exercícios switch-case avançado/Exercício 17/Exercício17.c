#include <math.h>
#include <stdio.h>

/*
Yuri J. Pereira
17) Faça um programa que leia um número inteiro e informe se ele é divisível por 2, 3, 5 ou 7,
utilizando a estrutura switch-case.
*/

int main (void){
	
	int numero;
	
	printf("Digite um numero para saber se ele e divisivel por 2, 3, 5 ou 7.\n");
	printf("Numero: ");
	scanf("%i", &numero);
	
	if(numero%2==0){
		numero=2;
	}
	else if(numero%3==0){
		numero=3;
	}
	else if(numero%5==0){
		numero=5;
	}
	else if(numero%7==0){
		numero=7;
	}
	else{
		printf("O numero digitado nao e divisivel por 2, 3, 5 ou 7.");
	}
	
	switch(numero){
		case 2:
			printf("O numero digitado e divisivel por 2.");
			break;
		case 3:
			printf("O numero digitado e divisivel por 3.");
			break;
		case 5:
			printf("O numero digitado e divisivel por 5.");
			break;
		case 7:
			printf("O numero digitado e divisivel por 7.");
			break;
	}
	return 0;
}
