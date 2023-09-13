#include <stdio.h>
#include <math.h>

/*
Yuri J. Pereira
4. Faça uma função que receba como argumentos os valores dos lados de um triângulo, a função deverá retornar 0 se triângulo for equilátero,
1 se for isósceles ou 2 se for escaleno.
*/

int tipoTriangulo(int lado1, int lado2, int lado3);

int main(void){
    int lado1=0, lado2=0, lado3=0, triangulo;

    printf("Insira o valor do primeiro lado do triangulo: ");
    scanf("%i", &lado1);
    printf("Insira o valor do segundo lado do triangulo: ");
    scanf("%i", &lado2);
    printf("Insira o valor do terceiro lado do triangulo: ");
    scanf("%i", &lado3);

    triangulo=tipoTriangulo(lado1, lado2, lado3);

    if(triangulo==0){
        printf("\nO triangulo e equilatero.\n");
    }
	else if (triangulo==1){
        printf("\nO triangulo e isosceles.\n");
    }
	else{
        printf("\nO triangulo e escaleno.\n");
    }

    return 0;
}

int tipoTriangulo(int lado1, int lado2, int lado3){
    if(lado1==lado2 && lado2==lado3){
        return 0;
    }
	else if (lado1==lado2 || lado1==lado3 || lado2==lado3){
        return 1;
    }
	else {
        return 2;
    }
}
