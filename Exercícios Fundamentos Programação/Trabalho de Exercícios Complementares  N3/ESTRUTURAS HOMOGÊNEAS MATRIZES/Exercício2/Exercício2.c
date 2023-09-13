#include <stdio.h>
#include <math.h>

/*
Yuri J. Pereira
2. Construa um algoritmo que leia duas matrizes 3x3 e gere uma terceira matriz com a soma dos
elementos correspondentes de a e b.
*/

int main(void){
	
	int A[3][3], B[3][3], C[3][3], contador=0, i=0, j=0;
	
	for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        	printf("Insira um valor para a posicao %i da matriz A: ", contador);
			scanf("%i", &A[i][j]);
			contador++;
        }
    }
    
    printf("\n");
    contador=0;
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        	printf("Insira um valor para a posicao %i da matriz B: ", contador);
			scanf("%i", &B[i][j]);
			contador++;
        }
    }
	
	printf("\nMatriz A: \n");
	
	for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
        	printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMatriz B: \n");
    
    for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
        	printf("%d ", B[i][j]);
        }
        printf("\n");
    }
	
	for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
        	C[i][j]=A[i][j]+B[i][j];
        }
    }
    
    printf("\nMatriz C com os resultados das somas dos elementos correspondentes da matriz A e B:\n");
    
    for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
        	printf("%d ", C[i][j]);
        }
        printf("\n");
    }
	
	return 0;
}
