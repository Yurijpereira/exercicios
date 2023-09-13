#include <stdio.h>

/*
Yuri J. Pereira
exe_04. Um  programa  declara  três  strings.  Escrever  um  código  que  mostre  de  forma
ordenada a quantidade de caracteres de cada uma.
*/

int main (void){

    char string1[50], string2[50], string3[50];

    printf("Insira uma string ate no maximo 50 caracteres: ");
    scanf("%[^\n]", string1);
    fflush(stdin);
    printf("Insira outra string ate no maximo 50 caracteres: ");
    scanf("%[^\n]", string2);
    fflush(stdin);
    printf("Insira a ultima string ate no maximo 50 caracteres: ");
    scanf("%[^\n]", string3);
    fflush(stdin);

    int i=0, contador1=0, contador2=0, contador3=0;

    for(i=0;i<=50;i++){
        if(string1[i]!='\0'){
            contador1++;
        }
        else{
            break;
        }
    }

    for(i=0;i<=50;i++){
        if(string2[i]!='\0'){
            contador2++;
        }
        else{
            break;
        }
    }

    for(i=0;i<=50;i++){
        if(string3[i]!='\0'){
            contador3++;
        }
        else{
            break;
        }
    }

    printf("\nQuantidade de caracteres de cada string:\n%s: %i caracteres.\n%s: %i caracteres.\n%s: %i caracteres.", string1, contador1, string2, contador2, string3, contador3);

    return 0;
}
