#include <math.h>
#include <stdio.h>

/*
Yuri Jovêncio Pereira

3. Faça um programa que possua um vetor denominado A que armazene 6 números inteiros e valores iniciais {1,2,3,4,5,6}.
O programa deve executar os seguintes passos:

(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.

(b) Armazene em uma variável inteira (simples) a soma entre os valores das posições A[0], A[1] e A[5] do vetor e mostre na tela esta soma.

(c) Modifique o vetor na posição 1, atribuindo a esta posição o valor 10.

(d) Leia (scanf) novos valores para A nas posições 3 e 4 e mostre na tela cada valor do vetor A (ou seja, todo o vetor A), um em cada linha, utilizando FOR.

(e) Mostre na tela os números de posições pares e zero, de forma inversa (i == 4,2 e 0) c/ FOR

(f) Faça a divisão do elemento da última posição pela primeira posição do vetor A.

(g) Faça a subtração de todos os elementos do vetor com DO WHILE()
*/

int main(void){
	
	int A[6]={1,2,3,4,5,6}, i;
	
	printf("Valores iniciais do vetor = A[6]={1,2,3,4,5,6}\n");
	
	//Letra A
	A[0]=1;
	A[1]=0;
	A[2]=5;
	A[3]=-2;
	A[4]=-5;
	A[5]=7;
	
	printf("\nValores com novas atribuicoes:\n");
	for(i=0;i<6;i++){
		printf("%i,", A[i]);
	}
	
	//Letra B
	int soma=0;
	
	soma=A[0]+A[1]+A[5];
	printf("\n\nSoma:\nA[0]+A[1]+A[5] = %i\n", soma);
	
	//Letra C
	A[1]=10;
	printf("\nValores com nova atribuicao na posicao A[1]:\n");
	for(i=0;i<6;i++){
		printf("%i,", A[i]);
	}
	
	printf("\n\n");
	
	//Letra D
	for(i=3;i<5;i++){
		printf("Insira um novo valor para a posicao A[%i]: ", i);
		scanf("%i", &A[i]);
	}
	
	printf("\nValores do vetor A com as posicoes A[3] e A[4] alteradas pelo (scanf):\n");
	for(i=0;i<6;i++){
		printf("%i\n", A[i]);
	}
	
	//Letra E
	printf("\nNumeros nas posicoes pares e na posicao zero de forma inversa com a utilizacao de for:\n");
	for(i=5;i>=0;i--){
		if(i%2==0){
			printf("%i,", A[i]);
		}
		else{
			continue;
		}
	}
	
	//Letra F
	float divisao=0;
	divisao= (A[5]/A[0]);
	printf("\n\nResultado da divisao do elemento da ultima posicao do vetor A pelo elemento da primeira posicao:\n");
	printf("%.2f\n", divisao);
	
	//Letra G
	int subtracao=0;
	i=0;
	do{
		if(i==0){
			subtracao=A[i];
		}
		else{
			subtracao-=A[i];
		}
		i++;
	}while(i<6);
	printf("\nResultado da subtracao de todos os elementos do vetor A:\n");
	printf("%i", subtracao);
	
	return 0;
}
