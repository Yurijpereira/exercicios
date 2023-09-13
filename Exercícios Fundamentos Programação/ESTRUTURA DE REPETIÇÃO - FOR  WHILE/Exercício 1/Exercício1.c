#include <math.h>
#include <stdio.h>

/*
Yuri J. Pereira
1.Faça um programa que exiba na tela os números de 1 à 10.
Utilizando estrutura de repetição while e for.
*/

int main (void){
	
	int i;
	
	for(i=1; i<=10; i++){
		printf("%i, ", i);
	}
	
	i=1;
	printf("\n");
	
	while(i<=10){
		printf("%i, ", i);
		i++;
	}	
	return 0;
}
