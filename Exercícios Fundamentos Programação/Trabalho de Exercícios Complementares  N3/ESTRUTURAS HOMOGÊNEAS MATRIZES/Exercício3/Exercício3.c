#include <stdio.h>
#include <math.h>

/*
Yuri J. Pereira
3. Construa um algoritmo que leia uma matriz quadrada de ordem 4. Leia uma constante K, multiplique a diagonal
principal por esta constante e imprima a matriz multiplicada.
*/

#define K 2

int main(void){
	
	int matriz[4][4], i, j, contador=0;
	
	for(i=0;i<4;i++){
        for(j=0;j<4;j++){
        	printf("Insira um valor para a posicao %i da matriz: ", contador);
			scanf("%i", &matriz[i][j]);
			contador++;
        }
    }
	
	printf("\nValores da Matriz: \n");
	
	for(i=0;i<4;i++){
    	for(j=0;j<4;j++){
        	printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
	
	for(i=0;i<4;i++){
    	for(j=0;j<4;j++){
    		if(i==j){
    			matriz[i][j]*=K;
			}
        }
    }
	
	printf("\nValores da Matriz com a diagonal principal multiplicada pela constante K: \n");
	
	for(i=0;i<4;i++){
    	for(j=0;j<4;j++){
        	printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
	
	return 0;
}
