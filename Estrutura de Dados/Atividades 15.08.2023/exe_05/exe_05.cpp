#include <stdio.h>

/*
Yuri J. Pereira
exe_05. Construir uma fun��o que retorne o resto de uma divis�o entre dois n�meros inteiros.
*/

//prot�tipo
int restoDiv(int n1, int n2);

int main (void){

    int n1=0, n2=0;

    printf("Insira um numero: ");
    scanf("%i", &n1);
    printf("Insira outro numero: ");
    scanf("%i", &n2);

    printf("\nResultado do resto da divisao de %i e %i = %i", n1, n2, restoDiv(n1, n2));

    return 0;
}

int restoDiv(int n1, int n2){

    return n1%n2;
}
