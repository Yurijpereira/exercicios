#include <stdio.h>
#include <math.h>

/*
Yuri J. Pereira
exe_03. Calcular o somatório dos quadrados dos valores de um até n.
*/

int main (void){

    int quantNumeros=0, i=0;
    float soma=0;

    printf("Calculo da somatoria dos quadrados dos valores de 1 ate ...: ");
    scanf("%i", &quantNumeros);

    float quadrado[quantNumeros];

    for(i=0;i<=quantNumeros;i++){
        quadrado[i]= pow(i, 2);
    }

    for(i=0;i<=quantNumeros;i++){
        soma+=quadrado[i];
    }

    printf("\nResultado da soma dos quadrados: %.2f", soma);

    return 0;
}
