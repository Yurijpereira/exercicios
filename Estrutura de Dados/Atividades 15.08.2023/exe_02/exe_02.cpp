#include <stdio.h>

/*
Yuri J. Pereira
exe_02. Construir um loop para realizar 10 interações e
imprimir somente os números pares das interações.
*/

int main (void){

    int i=0, numeros[10];

    printf("Sera pedido a entrada de 10 numeros e ao final do programa serao exibidos apenas os numeros pares.\n\n");

    for(i=0;i<10;i++){
        printf("Digite o %i numero: ", i+1);
        scanf("%i", &numeros[i]);
    }

    printf("\nOs numeros pares lidos foram:\n");

    for(i=0;i<10;i++){
        if(numeros[i]%2==0){
            printf("%i, ", numeros[i]);
        }
        else{
            continue;
        }
    }

    return 0;
}
