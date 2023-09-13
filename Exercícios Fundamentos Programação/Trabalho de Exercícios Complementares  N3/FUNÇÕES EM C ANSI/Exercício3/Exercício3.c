#include <stdio.h>
#include <math.h>

/*
Yuri J. Pereira
3. Fazer um programa que possibilite várias opções de cálculos a partir de um menu.
O programa chamará a função correspondente a cada cálculo.

[ a ] S = 1/1 + 3/2 + 5/3+........+ 99/50

[ b ] S = 1/1 - 2/2 + 3/3 -..........- 10/10

[ c ] S = 1000/1 - 997/2 + 994/3.........

[ d ] S = 480/10 - 475/11 + 470/12 - .......

[ f ] FIM

Obs.: Nas opções [c] e [d] fazer os cálculos para os 20 primeiros termos.
*/

float a(void);
float b(void);
float c(void);
float d(void);

int main(void){
	
	char opcao;
	
	while(opcao!='f'){
		
		printf("\nMenu de opcoes:\n\n");
		printf("[a] S = 1/1 + 3/2 + 5/3+........+ 99/50\n");
		printf("[b] S = 1/1 - 2/2 + 3/3 -..........- 10/10\n");
		printf("[c] S = 1000/1 - 997/2 + 994/3.........\n");
		printf("[d] S = 480/10 - 475/11 + 470/12 - .......\n");
		printf("[f] FIM\n\n");
		printf("Insira a opcao: ");
		scanf("%c", &opcao);
		fflush(stdin);
		
		switch(opcao){
			case'A':
			case'a':
				printf("\nResultado: %.2f\n", a());
				break;
			case'B':
			case'b':
				printf("\nResultado: %.2f\n", b());
				break;
			case'C':
			case'c':
				printf("\nResultado: %.2f\n", c());
				break;
			case'D':
			case'd':
				printf("\nResultado: %.2f\n", d());
				break;
			case'F':
			case'f':
				break;
			default:
				printf("Opcao invalida!!! Insira uma opcao valida.");
				break;
		}
	}
	
	
	return 0;
}

float a(void){
	
	//[a] S = 1/1 + 3/2 + 5/3+........+ 99/50
	
	float num=1, divisor=1, divisao=0, resultado=0;
	
	while(num<=99 && divisor<=50){
		divisao=num/divisor;
		printf("\nS = %.f/%.f = %.4f\n", num, divisor, divisao);
		divisor++;
		num+=2;
		resultado+=divisao;
	}
	
	return resultado;
}

float b(void){
	
	//[b] S = 1/1 - 2/2 + 3/3 -..........- 10/10
	
	float divisor=1, divisao=0, resultado=0;
	int num=1;
	
	while(num<=10 && num<=10){
		if(num%2==0){
			divisao=(float)num/divisor;
			printf("\nS = %i/%.f = %.4f\n", num, divisor, divisao);
			num++;
			divisor++;
			resultado+=divisao;
		}
		else{
			divisao=(float)num/divisor;
			printf("\nS = %i/%.f = %.4f\n", num, divisor, divisao);
			num++;
			divisor++;
			resultado-=divisao;
		}
	}
	
	return resultado;
}

float c(void){
	
	//[c] S = 1000/1 - 997/2 + 994/3.........
	
	int fim=0;
	float num=1000, divisor=1, divisao=0, resultado=0;
	
	while(fim<20){
		if(fim%2==0){
			divisao=num/divisor;
			printf("\nS = %.f/%.f = %.4f\n", num, divisor, divisao);
			num-=3;
			divisor++;
			resultado-=divisao;
			fim++;
		}
		else{
			divisao=num/divisor;
			printf("\nS = %.f/%.f = %.4f\n", num, divisor, divisao);
			num-=3;
			divisor++;
			resultado+=divisao;
			fim++;
		}
	}
	
	return resultado;
}

float d(void){
	
	//[d] S = 480/10 - 475/11 + 470/12 - .......
	
	int fim=0;
	float num=480, divisor=10, divisao=0, resultado=0;
	
	while(fim<20){
		if(fim%2==0){
			divisao=num/divisor;
			printf("\nS = %.f/%.f = %.4f\n", num, divisor, divisao);
			num-=5;
			divisor++;
			resultado-=divisao;
			fim++;
		}
		else{
			divisao=num/divisor;
			printf("\nS = %.f/%.f = %.4f\n", num, divisor, divisao);
			num-=5;
			divisor++;
			resultado+=divisao;
			fim++;
		}
	}
	
	return resultado;
}
