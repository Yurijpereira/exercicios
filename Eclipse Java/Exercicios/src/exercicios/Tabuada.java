package exercicios;

/*
Yuri J. Pereira
3) Crie um programa que exiba a tabuada de um número informado pelo usuário;
 */
import java.util.Scanner;

public class Tabuada {

	public static void main(String[] args) {
		
		try (Scanner leitor = new Scanner(System.in)) {
			System.out.println("Informe um número: ");
			
			int numero = leitor.nextInt();
			
			int i=0;
			
			for(i=0; i<=10; i++) {
				int resultado = numero*i;
				System.out.println(""+numero+ " X "+i+ " = "+resultado);
			}
		}
		
	}

}
