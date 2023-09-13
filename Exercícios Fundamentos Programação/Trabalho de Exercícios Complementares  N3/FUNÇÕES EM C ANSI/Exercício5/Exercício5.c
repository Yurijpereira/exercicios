#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*
Yuri J. Pereira
5. Faça um programa que simule uma calculadora. Deverão ser solicitados 2 números e a operação desejada. Para cada operação,
deverá ser chamada uma função diferente [ex: int soma(n1,n2), float divisao(n1,n2) ]. A função deverá receber como parâmetros
os 2 números e deverá retornar o resultado(atenção para a divisão que tem que ser float).
*/

float soma(float n1, float n2);
float subtracao(float n1, float n2);
float divisao(float n1, float n2);
float multiplicacao(float n1, float n2);

int main(void){
	
	float n1=0, n2=0;
	char operacao, loop;
	
	while(loop!='N' && loop!='n'){
	
		printf("\nInsira um numero: ");
		scanf("%f", &n1);
		printf("Insira outro numero: ");
		scanf("%f", &n2);
		fflush(stdin);
	
		printf("\nMenu de opcoes de operacores:\n\n");
		printf("[+] - Adicao\n");
		printf("[-] - Subtracao\n");
		printf("[*] - Multiplicacao\n");
		printf("[/] - Divisao\n");
		printf("[s] - Sair\n");
		
		printf("\nDigite a operacao que deseja utilizar: ");
		scanf("%c", &operacao);
		fflush(stdin);
		
		switch(operacao){
			case'+':
				system("cls");
				printf("\nSoma: %.2f + %.2f = %.2f\n", n1, n2, soma(n1, n2));
				break;
			case'-':
				system("cls");
				printf("\nSubtracao: %.2f - %.2f = %.2f\n", n1, n2, subtracao(n1, n2));
				break;
			case'*':
				system("cls");
				printf("\nMultiplicacao: %.2f * %.2f = %.2f\n", n1, n2, multiplicacao(n1, n2));
				break;
			case'/':
				system("cls");
				printf("\nDivisao: %.2f / %.2f = %.2f\n", n1, n2, divisao(n1, n2));
				break;
			case'S':
			case's':
				break;
			default:
				printf("Opcao invalida!!! Insira uma opcao valida.\n");
				continue;
		}
		
		printf("\nDigite 'S' para continuar ou 'N' para encerrar o programa.\nContinuar? ");
		scanf("%c", &loop);
		fflush(stdin);
		system("cls");
	}
	
	return 0;
}

float soma(float n1, float n2){
	return n1+n2;
}

float subtracao(float n1, float n2){
	return n1-n2;
}

float multiplicacao(float n1, float n2){
	return n1*n2;
}

float divisao(float n1, float n2){
	return n1/n2;
}
