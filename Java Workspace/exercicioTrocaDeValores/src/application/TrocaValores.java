/* Crie um programa que troque os valores que estão armazenados nas variáveis nome1 e nome2.
 * A variável nome1 armazenara o valor “mestre do universo”.
 * A variável nome2 receberá um valor informado pelo usuário.
 * Altere os valores das variáveis e exiba a soma da variável nome1 com o valor da variável nome2.
 */

package application;

import java.util.Scanner;

public class TrocaValores {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		String nome1 = "mestre do universo";
		
		System.out.print("Insira uma string: ");
		String nome2 = sc.nextLine();
		
		
		sc.close();
	}

}
