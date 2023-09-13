#include <stdio.h>
#include <math.h>

/*
Yuri J. Pereira
1.Criar um programa que armazene o nome e a idade de uma lista de pessoas em vetores,
e mostre na tela. Calcule a média de idade da lista.
*/

int main (void){

int somaIdades=0, encerrar=1, i=0, quantPessoas=0;
float media=0;


printf("Digite quantas pessoas a lista tem: ");
scanf("%i", &quantPessoas);
fflush(stdin);

char nome[quantPessoas][100];
int idade[quantPessoas];

do{
printf("\nInsira o %i nome: ", i+1);
fgets(nome[i], 100, stdin);
fflush(stdin);
printf("Insira a idade da pessoa: ");
scanf("%i", &idade[i]);
fflush(stdin);

somaIdades+=idade[i];

i++;

if(i>=quantPessoas){
break;
}
else{
continue;
}

}while(1);

media=somaIdades/quantPessoas;

printf("\nNomes e idades da lista de pessoas: ");
for(i=0;i<quantPessoas;i++){
printf("\n\nNome: %s", nome[i]);
printf("Idade: %i", idade[i]);
}

printf("\n\nMedia das idades: %.2f", media);

return 0;
}
