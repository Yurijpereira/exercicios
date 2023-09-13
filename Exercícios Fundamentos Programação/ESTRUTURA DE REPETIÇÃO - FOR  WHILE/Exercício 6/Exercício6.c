#include <math.h>
#include <stdio.h>

/*
Yuri J. Pereira
6.Supondo que a população de um país A seja da ordem de 80.000 habitantes com uma taxa anual de crescimento de 3%
e que a população do país B seja, aproximadamente, de 200.000 habitantes com uma taxa de crescimento anual de 1,5%.
Fazer um programa que calcule e escreva o número de anos necessários para que a população do país A ultrapasse ou iguale a população do país B,
mantidas essas taxas de crescimento.
*/

int main (void){
	
	int i, anos;
	float paisA=80.000, paisB=200.000;
	
	while(paisA<paisB){
		anos++;
		paisA*= 1.03;
		paisB*= 1.015;
	}
	printf("\nAnos: %i\nHabitantes Pais A: %.3f\nHabitantes Pais B: %.3f", anos, paisA, paisB);
	
	return 0;
}
