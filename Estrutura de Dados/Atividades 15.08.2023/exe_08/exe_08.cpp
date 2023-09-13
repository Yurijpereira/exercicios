#include <stdio.h>
#include <string.h>

/*
Yuri J. Pereira
exe_08. Elabore uma função que receba uma estrutura como parâmetro, altere
os valores dos membros da estrutura e devolva para a função principal
imprimir esses valores alterados.
*/

//prototipo
void alteraValor(struct dados *dados1);

struct dados{
    char nome[50];
    int idade;
    float altura;
};

int main (void){

    struct dados dados1;

    printf("Insira seu primeiro nome: ");
    scanf("%s", &dados1.nome);
    printf("Insira sua idade: ");
    scanf("%i", &dados1.idade);
    printf("Insira sua altura: ");
    scanf("%f", &dados1.altura);

    printf("\nValores antes de serem alterados\nNome: %s\nIdade: %i\nAltura: %.2f", dados1.nome, dados1.idade, dados1.altura);

    alteraValor(&dados1);

    printf("\n\nValores depois de serem alterados\nNome: %s\nIdade: %i\nAltura: %.2f", dados1.nome, dados1.idade, dados1.altura);

    return 0;
}

void alteraValor(struct dados *dados1){

    strcpy((*dados1).nome, "Zero");
    (*dados1).idade=0;
    (*dados1).altura=0;

}
