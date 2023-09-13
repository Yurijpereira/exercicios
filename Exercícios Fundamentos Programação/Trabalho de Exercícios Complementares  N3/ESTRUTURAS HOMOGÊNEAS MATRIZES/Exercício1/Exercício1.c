#include <stdio.h>
#include <math.h>

/*
Yuri J. Pereira
1. Fa�a um programa que possua um matriz 3x3 denominado M que armazene 9 n�meros inteiros e valores iniciais {1,2,3,4,5,6,7,8,9}.
O programa deve executar os seguintes passos:

(a) Atribua/mude o valor para 50 na linha 2, coluna 2 (quinto elemento) e para 40 na quarta posi��o da matriz M e mostre na tela.

(b) Armazene em uma vari�vel inteira (simples) a soma entre os valores das posi��es M[0][1], M[1][1] e M[2][2] da matriz e mostre na tela esta soma.

(c) Leia (scanf) novos valores para M nas posi��es 0 a 6, utilizando FOR.

(d) Mostre na tela toda a matriz, no formato de matrizes (pulando linhas quando necess�rio) usando FOR

(e) Fa�a a divis�o do �ltimo elemento pelo primeiro elemento da matriz M.

(f) Fa�a a subtra��o de todos os elementos da matriz com WHILE()
*/

int main(void){
	
	int M[3][3]={{1,2,3},
	             {4,5,6},
	             {7,8,9}};
	
	//a
	M[1][1]=50;
	M[1][0]=40;
	
	int i=0, j=0;
	
	printf("Matriz com o valor linha 2, coluna 2 alterado e quarta posicao tambem alterada: \n");
	
	for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
        	printf("%d ", M[i][j]);
        }
        printf("\n");
    }
	
	//b
	int soma=0, contador=0;
	
	soma=M[0][1]+M[1][1]+M[2][2];
	
	printf("\nO Resultado da soma e: %i\n\n", soma);
	
	//c
	for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        	if (i==2 && j>0){
                break;
            }
        	printf("Digite um novo valor para a posicao %i: ", contador);
			scanf("%i", &M[i][j]);
			contador++;
        }
    }
    
    printf("\nM com novos valores nas posicoes de 0 a 6 lidos com scanf: \n");
	
	for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
        	printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    
    //d
    printf("Matriz no formato de matrizes com a utilizacao de for:\n");
    
    for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
        	printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    
    //e
    float divisao=0;
    
    divisao=(float)(M[2][2]/M[0][0]);
    
    printf("\nResultado da divisao do ultimo elemento pelo primeiro elemento da matriz M: %.2f\n", divisao);
    
    //f
    int subtracao=0;
    i=0;
    
    while(i<3){
    	j=0;
    	while(j<3){
	    	if(i==0 && j==0){
	    		subtracao=M[i][j];
			}
			else{
				subtracao-=M[i][j];
			}
			j++;
		}
		i++;
	}
    
    printf("\nResultado da subtracao de todos os elementos da matriz M com a utilizacao de while:\n");
	printf("%i", subtracao);
    
	return 0;
}
