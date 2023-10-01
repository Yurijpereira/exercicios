/* Calcular e apresentar o valor do volume de uma lata de óleo, utilizando fórmula: V = 3.14159 * R * R * A, em que as variáveis:
 * V, R e A representam respectivamente o volume, o raio e a altura. Vamos declarar as variáveis V, R e A como double e definir um
 * valor qualquer para as variáveis de altura e de raio. Agora vamos escrever a fórmula, conforme dita no enunciado e, em seguida,
 * exibir na tela uma mensagem contendo o resultado do volume encontrado.
 */

package application;

import java.util.Scanner;

public class CalculaVolumeLata {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Insira uma altura: ");
		double A = sc.nextDouble();
		System.out.print("Insira um raio: ");
		double R = sc.nextDouble();
		
		double V = 3.14159 * R * R * A;
		
		System.out.println("\nVolume: " + V);
		
		sc.close();
	}

}
