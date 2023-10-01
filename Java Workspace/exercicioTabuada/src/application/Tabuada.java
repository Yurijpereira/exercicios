//Crie um programa que exiba a tabuada de um número informado pelo usuário;

package application;

import java.util.Scanner;

public class Tabuada {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Insira um número inteiro: ");
		int num = sc.nextInt();
		
		for(int i = 0; i <= 10; i++) {
			int resultado = num * i;
			System.out.println(num + " * " + i + " = " + resultado);
		}
		
		sc.close();
	}

}
