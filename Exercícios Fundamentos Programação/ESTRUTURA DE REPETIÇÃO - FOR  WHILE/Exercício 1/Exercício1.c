#include <math.h>
#include <stdio.h>

/*
Yuri J. Pereira
1.Fa�a um programa que exiba na tela os n�meros de 1 � 10.
Utilizando estrutura de repeti��o while e for.
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
