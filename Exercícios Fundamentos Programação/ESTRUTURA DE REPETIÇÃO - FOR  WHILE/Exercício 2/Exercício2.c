#include <math.h>
#include <stdio.h>

/*
Yuri J. Pereira
2.Fa�a um programa que pe�a dois n�meros inteiros e gere os n�meros pares que est�o no intervalo entre eles.
Utilizando estrutura de repeti��o while e for.
*/

int main (void){
	
	int num1=0, num2=0;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%i", &num1);
	printf("Digite o segundo n�mero: ");
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
	
	printf("\nDigite o primeiro n�mero: ");
	scanf("%i", &num1);
	printf("Digite o segundo n�mero: ");
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

