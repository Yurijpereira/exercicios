#include <stdio.h>
#include <math.h>

/*
Yuri Jov�ncio Pereira
1. Fa�a um programa que leia um n�mero, passe este n�mero como par�metro para uma fun��o
que retorne 0 se o n�mero for par ou 1 se o n�mero for �mpar.
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

