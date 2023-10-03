package entities;

public class Carro {
	String cor;
	String modelo;
	double velocidadeAtual;
	double velocidadeMaxima;
	
	// liga o carro
	void liga() {
		System.out.println("O carro está ligado");
	}
	
	// acelera uma certa quantidade
	void acelera(double quantidade) {
		double velocidadeNova = this.velocidadeAtual + quantidade;
		this.velocidadeAtual = velocidadeNova;
	}
}
