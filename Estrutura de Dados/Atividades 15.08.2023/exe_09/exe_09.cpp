#include <stdio.h>

/*
Yuri J. Pereira
exe_09. Um programa que contém duas variáveis inteiras e cada uma destas variáveis deve ter um valor atribuído.
Escrever um programa que mostre os seguintes resultados:
a)A soma das duas variáveis.
b)A diferença entre as duas variáveis.
c)O dobro da primeira mais o triplo da segunda variável.
d)A multiplicação das duas variáveis.
*/

int main (void){

    float n1=0, n2=0;

    printf("Insira um numero: ");
    scanf("%f", &n1);
    printf("Insira outro numero: ");
    scanf("%f", &n2);

    float soma=0, diferenca=0, dobroTri=0, multi=0;

    soma=n1+n2;
    diferenca=n1-n2;
    dobroTri=(n1*2)+(n2*3);
    multi=n1*n2;

    printf("\nResultados\nSoma: %.2f\nDiferenca: %.2f\nDobro mais o triplo: %.2f\nMultiplicacao: %.2f", soma, diferenca, dobroTri, multi);

    return 0;
}
