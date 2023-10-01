/*
 * Na empresa onde trabalhamos, há tabelas com o quanto foi gasto em cada mês. Para fechar o balanço do primeiro trimestre, 
 * precisamos somar o gasto total. Sabendo que, em Janeiro, foram gastos 15000 reais, em Fevereiro, 23000 reais e em Março, 
 * 17000 reais, faça um programa que calcule e imprima o gasto total no trimestre.
 */

package application;

public class BalancoTrimestral {

	public static void main(String[] args) {
		
		int gastosJaneiro = 15000;
		int gastosFevereiro = 23000;
		int gastosMarco = 17000;
		int gastosTrimestre = gastosJaneiro + gastosFevereiro + gastosMarco;
		
		System.out.println("Gasto trimestral: " + gastosTrimestre);
		
		int mediaMensal = gastosTrimestre/3;
		
		System.out.print("Valor da média mensal = " + mediaMensal);
	}

}
