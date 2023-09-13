#include <stdio.h>
#include <math.h>

/*
Yuri Jovêncio Pereira
1. Faça um programa que leia um número, passe este número como parâmetro para uma função
que retorne 0 se o número for par ou 1 se o número for ímpar.
*/

//prototipo
int funcao1(int nx);

int main(void){

float n1;

printf("Digite um numero: ");
scanf("%f", &n1);

printf("%i", funcao1(n1));

return 0;
}

int funcao1(int nx){
if(nx%2==0){
return 0;
}
else{
return 1;
}
}

