#include <stdio.h>

/*
Yuri J. Pereira
exe_10. Uma folha de pagamento simplificada cont�m os itens: Nome do Funcion�rio, Sal�rio  e
Taxa  de  Desconto  de  INSS.  Criar  um programa  que  considere  uma  taxa  de desconto de
8% e mostre no v�deo:
e)Nome do Funcion�rio.
f)Sal�rio bruto
g)Valor do INSS
h)Sal�rio l�quido.
*/

int main (void){

    char nome[50];
    float salarioBruto=0, inss=0,salarioLiq=0;

    printf("Insira seu primeiro nome: ");
    scanf("%s", &nome);
    printf("Insira seu salario: ");
    scanf("%f", &salarioBruto);

    salarioLiq=salarioBruto;
    salarioLiq-=salarioBruto*0.08;
    inss=salarioBruto*0.08;

    printf("\nNome: %s\n", nome);
    printf("Salario bruto: R$%.2f\n", salarioBruto);
    printf("Valor do INSS: R$%.2f\n", inss);
    printf("Salario liquido: R$%.2f\n", salarioLiq);

    return 0;
}
