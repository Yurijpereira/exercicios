#include <stdio.h>

/*
Yuri J. Pereira
exe_11. Baseando  no  item  anterior,  escreva  um  programa  que  define  uma  taxa  de desconto
de acordo com o seguinte critério:
i)Salário até R$ 1.000,00 –desconto de 8%
j)Salário entre R$ 1.000,01 e 1.500,00 –desconto de 8,5%
k)Salário acima de R$ 1.500,00 –desconto de 9%
l)O  programa  deve  mostrar  o  salário  em  consideração  e  mostrar  sua  taxa  de desconto,
bem como o valor do desconto.
*/

int main (void){

    char nome[50];
    float salarioBruto=0, desconto=0, salarioLiq=0, taxa=0, valorDesconto=0;

    printf("Insira seu primeiro nome: ");
    scanf("%s", &nome);
    printf("Insira seu salario: ");
    scanf("%f", &salarioBruto);

    if(salarioBruto<=1000){
        desconto=0.08;
        taxa=8;
    }
    else if(salarioBruto>1000 && salarioBruto<=1500){
        desconto=0.085;
        taxa=8.5;
    }
    else{
        desconto=0.09;
        taxa=9;
    }

    valorDesconto=salarioBruto*desconto;
    salarioLiq=salarioBruto-valorDesconto;

    printf("\nNome: %s\n", nome);
    printf("Salario bruto: R$%.2f\n", salarioBruto);
    printf("Valor do desconto: R$%.2f\n", valorDesconto);
    printf("Taxa de desconto: %.2f%%\n", taxa);
    printf("Salario liquido: R$%.2f\n", salarioLiq);

    return 0;
}
