#include <stdio.h>

/*
Yuri J. Pereira
exe_06. Construir uma fun��o que recebe como par�metro o endere�o de uma vari�vel e
altere o valor para que a fun��o principal possa imprimir.
*/

//Prot�tipo
void alteraValor(int *n1);

int main (void){

    int numero1=0;

    printf("Insira um numero: ");
    scanf("%i", &numero1);

    printf("\nValor da variavel antes de ser alterada pela funcao: %i", numero1);

    alteraValor(&numero1);

    printf("\nValor da variavel depois de ser alterada pela funcao: %i", numero1);

    return 0;
}

void alteraValor(int *n1){
    *n1=1;
}
