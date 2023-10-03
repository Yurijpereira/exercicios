/* 1. Imprima todos os números de 150 a 300.
 * 2. Imprima a soma de 1 até 1000.
 * 3. Imprima todos os múltiplos de 3, entre 1 e 100.
 * 4. Imprima os fatoriais de 1 a 10.
 *  O fatorial de um número n é n * (n-1) * (n-2) * ... * 1. Lembre-se de utilizar os parênteses.
 *  O fatorial de 0 é 1
 *  O fatorial de 1 é (0!) * 1 = 1
 *  O fatorial de 2 é (1!) * 2 = 2
 *  O fatorial de 3 é (2!) * 3 = 6
 *  O fatorial de 4 é (3!) * 4 = 24
 *  Faça um for que inicie uma variável n (número)
 *  como 1 e fatorial (resultado) como 1 e varia n de 1 até 10
 * 5. No código do exercício anterior, aumente a quantidade de números que terão os fatoriais impressos, até 20, 30, 40.
 * Em um determinado momento, além desse cálculo demorar, vai começar a mostrar respostas completamente erradas. Por quê?
 * Mude de int para long para ver alguma mudança.
 */

package application;

public class FixacaoSintaxe {

	public static void main(String[] args) {
		
		// 1.
		System.out.println("Numeros de 150 a 300: ");
		
		for (int i = 150; i <= 300; i++) {
			System.out.print(i + " ");
		}
		
		
		
	}

}
