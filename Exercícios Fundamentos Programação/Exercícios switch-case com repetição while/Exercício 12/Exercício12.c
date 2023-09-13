#include <math.h>
#include <stdio.h>

/*
Yuri J. Pereira
12) Faça um programa que implemente uma calculadora simples. O programa deve solicitar os operandos e o operador e mostrar a entrada e o resultado.
Inclua verificadores de erro para operadores inválidos e tentativa de divisão por zero.
*/

int main (void){
	
	float n1, n2, resultado;
	char operador, continuar='S';
	
	printf("Insira 2 numeros e selecione um operador aritmetico\nPara calcular o valor e descobrir o resultado.\n");
	printf("Operadores aritmeticos disponiveis: \n");
	printf("+ Soma\n- Subtracao\n* Multiplicacao\n/ Divisao\n\n");

	while(continuar=='S'){
		printf("\nInsira um numero: ");
		scanf("%f", &n1);
		printf("Insira outro numero: ");
		scanf("%f", &n2);
		fflush(stdin);
		printf("Insira um operador aritmetico: ");
		scanf("%c", &operador);
		fflush(stdin);
		
		switch(operador){
			case '+':
				resultado=n1+n2;
				printf("\n%.2f + %.2f = %.2f", n1, n2, resultado);
				break;
			case '-':
				resultado=n1-n2;
				printf("\n%.2f - %.2f = %.2f", n1, n2, resultado);
				break;
			case '*':
				resultado=n1*n2;
				printf("\n%.2f * %.2f = %.2f", n1, n2, resultado);
				break;
			case '/':
				if(n1==0 || n2==0){
					printf("\nNao e possivel dividir por 0\nInsira um numero valido.\n");
				}
				else{
					resultado=n1/n2;
					printf("\n%.2f / %.2f = %.2f", n1, n2, resultado);
				}
				break;
			default:
				printf("\nOperador invalido!!\nInsira um operador aritmetico valido.");
				break;
		}
		printf("\n\nDeseja continuar com o programa e inserir novos dados?\nDigite 'S' para continuar ou 'N' para encerrar o programa\n");
		printf("Continuar? ");
		scanf("%c", &continuar);
		fflush(stdin);
	}
	return 0;
}
