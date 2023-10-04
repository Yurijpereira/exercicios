package application;

import java.util.Scanner;

import entities.Carro;

public class Program {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		Carro carro1, carro2, carro3;
		carro1 = new Carro();
		carro2 = new Carro();
		carro3 = new Carro();
		
		System.out.print("Insira o modelo do primeiro carro: ");
		carro1.modelo = sc.nextLine();
		System.out.print("Insira a cor do primeiro carro: ");
		carro1.cor = sc.nextLine();
		
		System.out.print("\nInsira o modelo do segundo carro: ");
		carro2.modelo = sc.nextLine();
		System.out.print("Insira a cor do segundo carro: ");
		carro2.cor = sc.nextLine();
		
		System.out.print("\nInsira o modelo do terceiro carro: ");
		carro3.modelo = sc.nextLine();
		System.out.print("Insira a cor do terceiro carro: ");
		carro3.cor = sc.nextLine();
		
		System.out.println("\nCarro 1\nModelo: " + carro1.modelo
				+ ", Cor: " + carro1.cor);
		System.out.println("\nCarro 2\nModelo: " + carro2.modelo
				+ ", Cor: " + carro2.cor);
		System.out.println("\nCarro 3\nModelo: " + carro3.modelo
				+ ", Cor: " + carro3.cor);
		
		int seleciona = 0;
		
		while(seleciona != 1 && seleciona != 2 && seleciona != 3) {
			
			System.out.print("\nDigite o número do carro que deseja dirigir: ");
			seleciona = sc.nextInt();
			
			switch(seleciona) {
			case 1:
				System.out.println("\nCarro 1 selecionado.");
				break;
			case 2:
				System.out.println("\nCarro 2 selecionado.");
				break;
			case 3:
				System.out.println("\nCarro 3 selecionado.");
				break;
			default:
				System.out.println("\nNúmero inválido!!");
				continue;
			}
		}
		
		
		
		sc.close();
	}

}
