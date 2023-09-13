#include <stdio.h>
#include <math.h>

/*
Yuri Jovêncio Pereira
2. Faça uma função que desenhe linhas de caracteres na tela, a função receberá como argumento
o tipo de caractere e o número de linhas que deverá imprimir.
*/

//prototipo
char quantLinhas(int numLinhas);
void exibelinha(char c);


int main(void){

char caractere;
int linhas, i;

printf("Digite o tipo de caractere: ");
scanf("%c", &caractere);
printf("\nDigite a quantidade de linhas: ");
scanf("%i", &linhas);

/*
for(i=0;i<linhas;i++){
printf("%i - %c%c", i+1, caractere, quantLinhas(linhas));
}
*/

for (i=0;i<linhas;i++) {
exibelinha(caractere);
}

return 0;
}


void exibelinha(char c) {
int i = 0;

for (i=0;i<80;i++) {
printf("%c",c);
}
printf("\n");
}


char quantLinhas(int numLinhas){
int i;

for(i=0;i<numLinhas;i++){
return '\n';
}
}
