
import java.util.Scanner;

public class leitorIQA {
	public static void main(String[] args) {
		Scanner input = new Scanner (System.in);
		
		int IQA;
		String[] classificacao = {"Boa", "Regular", "Inadequada", "Má", "Péssima", "Crítica"};
		
		String[] efeitos = {"Ausência de sintomas", 
		"Leve agravamento dos sintomas de pessoas susceptíveis", 
		"Decréscimo da resistência física e significativo agravamento",
		"Aparecimento prematuro de certas doenças",
		"Morte prematura de pessoas doentes e pessoas idosas"};
		
		System.out.print("Informe o Índice de Qualidade do Ar(IQA): ");
		IQA = input.nextInt();
		
		System.out.println("Classificação: " + lerTabela1(IQA, classificacao));
		System.out.printf("Efeitos: " + lerTabela2(IQA, efeitos));
	}
	
	public static String lerTabela1(int IQA, String[] classificacao) {
        
        if (IQA >= 0 && IQA <= 50) {
            return classificacao[0];
        } else if (IQA >= 51 && IQA <= 100){
            return classificacao[1]; 
        } else if (IQA >= 101 && IQA <= 199) {
            return classificacao[2];
        } else if (IQA >= 200 && IQA <= 299) {
            return classificacao[3];
        } else if (IQA >= 300 && IQA <= 399) {
            return classificacao[4];
        } else if (IQA >= 400) {
            return classificacao[5];
        } else {
            return null; 
        }
	}
	
	public static String lerTabela2(int IQA, String[] efeitos) {
        if (IQA >= 0 && IQA <= 100) {
            return efeitos[0];
        } else if (IQA >= 101 && IQA <= 199) {
            return efeitos[1];
        } else if (IQA >= 200 && IQA <= 299) {
            return efeitos[2];
        } else if (IQA >= 300 && IQA <= 399) {
            return efeitos[3];
        } else if (IQA >= 400) {
            return efeitos[4];
        } else {
            return null; 
        }
	}
}