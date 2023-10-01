package application;

import java.util.Scanner;

public class LeitorConsole {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Insira seu nome: ");
		String nome = sc.nextLine();
		
		System.out.print("Seja bem-vindo " + nome);
		
		sc.close();
	}

}
