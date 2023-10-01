/* Crie um programa que calcule a média de um aluno para a matéria de matemática. O aluno deve informar seu nome e as
 * quatro notas da matéria;
 */

package application;

import java.util.Scanner;

public class MediaAluno {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Informe seu nome: ");
		String nome = sc.nextLine();
		
		System.out.print("Insira a primeira nota: ");
		double nota1 = sc.nextDouble();
		System.out.print("Insira a segunda nota: ");
		double nota2 = sc.nextDouble();
		System.out.print("Insira a terceira nota: ");
		double nota3 = sc.nextDouble();
		System.out.print("Insira a quarta nota: ");
		double nota4 = sc.nextDouble();
		
		double media = (nota1 + nota2 + nota3 + nota4)/4;
		
		System.out.println("\nAluno: " + nome + "\nMédia: " + media);
		
		sc.close();
	}

}
