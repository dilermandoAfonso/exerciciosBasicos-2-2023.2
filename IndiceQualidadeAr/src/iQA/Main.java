package iQA;

import java.util.Scanner; 

public class Main {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		IndiceQualidadeAr iQA = new IndiceQualidadeAr();
		iQA.indice = 0;
		
		System.out.print("Valor do índice: ");
		iQA.indice = input.nextDouble();
		
		iQA.classificacao = ""; 
		iQA.definirClassificacao();
		System.out.println("Classificação: " + iQA.classificacao);
		
		iQA.efeitos = "";
		iQA.definirEfeitos();
		System.out.println("Efeito: " + iQA.efeitos);
		
		double indiceAnterior = 0;
		System.out.print("Valor do índice: ");
		indiceAnterior = input.nextDouble();
		
		double comparativo = iQA.compararIndice(indiceAnterior);
		
		System.out.println("Comparativo: " + comparativo);
		
		if(comparativo>iQA.indice) {
			System.out.println("A qualidade do ar piorou");
		} 
		else if (comparativo<iQA.indice) {
			System.out.println("A qualidade do ar melhorou");
		} else {
			System.out.println("A qualidade do ar se mantém estável");
		}	
		input.close();
	}
}
