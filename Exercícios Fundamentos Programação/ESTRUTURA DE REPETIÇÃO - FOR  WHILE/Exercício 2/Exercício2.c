#include <math.h>
#include <stdio.h>

/*
Yuri J. Pereira
2.Faça um programa que peça dois números inteiros e gere os números pares que estão no intervalo entre eles.
Utilizando estrutura de repetição while e for.
*/

int main (void){
	
	int num1=0, num2=0;
	
	printf("Digite o primeiro número: ");
	scanf("%i", &num1);
	printf("Digite o segundo número: ");
	scanf("%i", &num2);
	
	if(num1<num2){
		num1++;
		for(num1; num1<num2; num1++){
			if(num1 % 2 == 0){
				printf("%i, ", num1);
			}
		}
	}
	else{
		num1--;
		for(num1; num1>num2; num1--){
			if(num1 % 2 == 0){
				printf("%i, ", num1);
			}
		}
	}
	
	printf("\nDigite o primeiro número: ");
	scanf("%i", &num1);
	printf("Digite o segundo número: ");
	scanf("%i", &num2);
	
	if(num1<num2){
		num1++;
		while(num1<num2){
			num1++;
			if(num1 % 2 == 0){
				printf("%i, ", num1);
			}
		}
	}
	else{
		num1--;
		while(num1>num2){
			num1--;
			if(num1 % 2 == 0){
				printf("%i, ", num1);
			}
		}
	}
	return 0;
}

