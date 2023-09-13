#include <stdio.h>
#include <math.h>

/*
Yuri J. Pereira
4. Faça um programa que utilize vetores para armazenar as temperaturas em diferentes pontos de um ambiente,
e calcule a temperatura média do ambiente como um todo.
*/

int main (void){

	float temperatura[3], media=0;
	int i;
	
	for(i=0;i<3;i++){
		printf("Insira a %i temperatura: ", i+1);
		scanf("%f", &temperatura[i]);
		media+=temperatura[i];
	}
	
	media/=3;
	
	for(i=0;i<3;i++){
		printf("\n%i - Temperatura: %.2f", i+1, temperatura[i]);
	}
	
	printf("\n\nMedia de temperaturas: %.2f", media);

	return 0;
}

