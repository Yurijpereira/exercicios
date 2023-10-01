/* Escreva um programa que, com base em uma temperatura em graus celsius, a converta e exiba em Kelvin (K), Réaumur (Re),
 * Rankine (Ra) e Fahrenheit (F), seguindo as fórmulas: F = C * 1.8 + 32; K = C + 273.15; Re = C * 0.8;
 * Ra = C * 1.8 + 32 + 459.67
 */

package application;

import java.util.Scanner;

public class ConverteTemperatura {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Insira uma temperatura em Celsius: ");
		int celsius = sc.nextInt();
		
		double kelvin = celsius + 273.15;
		double reaumur = celsius * 0.8;
		double rankine = celsius * 1.8 + 32 + 459.67;
		double fahrenheit = celsius * 1.8 + 32;
		
		System.out.println("Celsius: " + celsius 
				+ "\nKelvin: " + kelvin
				+ "\nRéaumur: " + reaumur
				+ "\nRankine: " + rankine
				+ "\nFahrenheit: " + fahrenheit);
		
		sc.close();
	}

}
