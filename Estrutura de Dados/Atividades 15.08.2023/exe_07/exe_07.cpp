#include <stdio.h>

/*
Yuri J. Pereira
exe_07. Elabore um programa que contenha uma estrutura com pelo menos um dado char,
um dado float, um dado int e um dado double. Receba os valores digitados pelo usuário,
e exiba em tela todos os dados.
*/

struct dados{
    char nome[50];
    float altura;
    int idade;
    double peso;
};


int main (void){

    struct dados dados1;

    printf("Insira seu primeiro nome: ");
    scanf("%s", &dados1.nome);
    printf("Insira sua altura: ");
    scanf("%f", &dados1.altura);
    printf("Insira sua idade: ");
    scanf("%i", &dados1.idade);
    printf("Insira seu peso: ");
    scanf("%lf", &dados1.peso); //Não precisaria de um double para peso. Apenas exemplo para o exercício.

    printf("\nNome: %s\nAltura: %.2f\nIdade: %i\nPeso: %.4lf", dados1.nome, dados1.altura, dados1.idade, dados1.peso);

    return 0;
}
