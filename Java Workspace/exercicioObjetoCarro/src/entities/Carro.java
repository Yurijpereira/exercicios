package entities;

public class Carro {
	public String cor;
	public String modelo;
	public double velocidadeAtual;
	public double velocidadeMaxima;
	
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
