package exercicios;

/*
Yuri J. Pereira
 
2) Adicione código (sem alterar as linhas que já existem) na classe anterior para imprimir a média mensal de gasto,
criando uma variável mediaMensal junto com uma mensagem. Para isso, concatene a String com o valor,
usando "Valor da média mensal = " + mediaMensal.
 */


public class Exercicio2 {

	public static void main(String[] args) {
		
		int gastosJaneiro = 15000;
		int gastosFevereiro = 23000;
		int gastosMarco = 17000;
		int gastosTrimestre = gastosJaneiro + gastosFevereiro + gastosMarco;
		
		System.out.println(gastosTrimestre);
		
		double mediaMensal = (double) gastosTrimestre / 3;
		
		System.out.println(mediaMensal);
	}

}
