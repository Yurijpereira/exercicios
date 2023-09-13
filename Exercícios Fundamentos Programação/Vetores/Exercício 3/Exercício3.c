#include <stdio.h>
#include <math.h>

/*
Yuri J. Pereira
3. Construa um algoritmo que leia um vetor de 10 números reais e mostre-os na
ordem inversa.
*/

int main(void){

float vetor[10];
int i;

printf("O programa ira pedir a entrada de 10 numeros\nAo final poderemos ver os numeros na ordem inversa\n");

for(i=0;i<10;i++){
printf("\nDigite o %i numero: ", i+1);
scanf("%f", &vetor[i]);
}

printf("\n");

for(i=9;i>=0;i--){
printf(" N%i: %.2f |", i+1, vetor[i]);
}

return 0;
}
