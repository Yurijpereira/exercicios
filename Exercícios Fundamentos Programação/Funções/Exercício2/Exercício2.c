#include <stdio.h>
#include <math.h>

/*
Yuri Jov�ncio Pereira
2. Fa�a uma fun��o que desenhe linhas de caracteres na tela, a fun��o receber� como argumento
o tipo de caractere e o n�mero de linhas que dever� imprimir.
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
