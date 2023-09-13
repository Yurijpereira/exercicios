#include <stdio.h>
#include <math.h>

/*
Yuri J. Pereira
2. Construa um algoritmo que leia um vetor de 5 números reais e mostre a soma,
a multiplicação e os números.
*/

int main (void){

float vetor[5], soma=0, multiplicacao=1;
int i;

printf("O programa ira pedir a entrada de 5 numeros\nAo final poderemos ver o resultado da soma e tambem da multiplicacao de todos os respectivos numeros.\n");

for(i=0;i<5;i++){
printf("\nDigite o %i numero: ", i+1);
scanf("%f", &vetor[i]);

soma+=vetor[i];
multiplicacao*=vetor[i];
}

printf("\n");

for(i=0;i<5;i++){
printf(" N%i: %.2f |", i+1, vetor[i]);
}

printf("\n\nResultado da soma de todos os numeros = %.2f\n", soma);
printf("\nResultado da multiplicacao de todos os numeros = %.2f\n", multiplicacao);

return 0;
}
