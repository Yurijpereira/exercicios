#include <stdio.h>

/*
Yuri J. Pereira
exe_12. Criar um programa que receba um n�mero �X� inteiro e mostre no v�deo somente os n�meros
pares ou m�ltiplos de 6, entre zero e X.
*/

int main (void){

    int x=0, i=0;

    printf("Insira um numero: ");
    scanf("%i", &x);

    for(i=0;i<x;i++){
        if (i%2==0 || i%6==0){
            printf("%i\n", i);
        }
    }
    return 0;
}
