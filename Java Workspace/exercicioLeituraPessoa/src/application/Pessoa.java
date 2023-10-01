package application;

import java.util.Scanner;

public class Pessoa {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Insira seu nome: ");
		String nome = sc.nextLine();
		System.out.print("Insira sua idade: ");
		int idade = sc.nextInt();
		sc.nextLine(); //consome quebra de linha pendente
		System.out.print("Insira sua data de nascimento: ");
		String nascimento = sc.nextLine();
		
		System.out.println("\nNome do usuário: " + nome + ", tem " + idade + " e nasceu no dia " + nascimento);
		
		sc.close();
	}

}
