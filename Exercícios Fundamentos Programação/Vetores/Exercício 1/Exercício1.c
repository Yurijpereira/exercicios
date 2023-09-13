#include <stdio.h>
#include <math.h>

/*
Yuri J. Pereira
1. Construa um algoritmo que leia um vetor de 10 números inteiros e mostre a
soma dos números (Use forma contraída para a soma).
*/

int main (void){

int vetor[10], i, soma=0;

printf("O programa ira pedir a entrada de 10 numeros\nAo final poderemos ver o resultado da soma de todos os respectivos numeros.\n");

for(i=0;i<10;i++){
printf("\nDigite o %i numero: ", i+1);
scanf("%i", &vetor[i]);

soma+=vetor[i];
}

printf("\n");

for(i=0;i<10;i++){
printf(" N%i: %i |", i+1, vetor[i]);
}

printf("\n\nResultado da soma de todos os numeros = %i\n", soma);

return 0;
}
