#include <stdio.h>

/*
Yuri J. Pereira
exe_09. Um programa que cont�m duas vari�veis inteiras e cada uma destas vari�veis deve ter um valor atribu�do.
Escrever um programa que mostre os seguintes resultados:
a)A soma das duas vari�veis.
b)A diferen�a entre as duas vari�veis.
c)O dobro da primeira mais o triplo da segunda vari�vel.
d)A multiplica��o das duas vari�veis.
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
