#include <stdio.h>

/*
Yuri J. Pereira
exe_13. Escrever um programa que calcule o número fatorial de um número.
*/

int main (void){

    int n1=0, fatorial=1, i=0;

    printf("Insira um numero: ");
    scanf("%i", &n1);

    if(n1<0){
        printf("\nO fatorial nao esta definido para numeros negativos.\n");
    }
    else if(n1==0 || n1==1){
        printf("\nO fatorial de %i e 1.\n", n1);
    }
    else{
        for(i=2;i<=n1;i++){
            fatorial*=i;
        }
        printf("\nO fatorial de %i e %i.\n", n1, fatorial);
    }

    return 0;
}
