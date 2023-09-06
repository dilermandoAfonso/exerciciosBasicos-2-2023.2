
import java.util.Scanner;

public class SalarioLiquidoCorrigido
{
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		double salarioBruto;
		double valorDesconto;
		double salarioLiquido;
		
		String[] tipoDesconto = {"Isento", "Mínimo", "Médio", "Máximo"};
		String apontarTipo;
		
		System.out.print("Informe o salário bruto: ");
		salarioBruto = input.nextDouble();
		
		valorDesconto = calcularValorDesconto(salarioBruto);
		salarioLiquido = calcularSalarioLiquido(valorDesconto, salarioBruto); 
		apontarTipo = ApontarTipo(tipoDesconto, salarioBruto);
		
		if (valorDesconto >= 400) {
		    valorDesconto = 400;
		    apontarTipo = tipoDesconto[3];
		}
		
		System.out.println("Salário Líquido: " + salarioLiquido);
		System.out.printf("Tipo de Desconto: " + apontarTipo); 
	}
	
	public static double calcularValorDesconto(double salarioBruto) {
	    double percentualDesconto; 
	    
	    if (salarioBruto <= 2000){
	        percentualDesconto = 0;
	        return 0;
	    } else if (salarioBruto <= 4000) {
	        percentualDesconto = 2;
	        return salarioBruto * 0.02; 
	    } else if (salarioBruto > 4000) {
	        percentualDesconto = 4;
	        return salarioBruto * 0.04; 
	    } else {
	        return 0;
	    }
	}
	
	public static double calcularSalarioLiquido(double valorDesconto, double salarioBruto) {
	    double contaSalarioLiquido = salarioBruto - valorDesconto;
	    return contaSalarioLiquido;
	}
	
	public static String ApontarTipo(String[] tipoDesconto, double salarioBruto) {
	    
	    if (salarioBruto <= 2000) {
	        return tipoDesconto[0];
	    } else if (salarioBruto <= 4000) {
	        return tipoDesconto[1];
	    } else if (salarioBruto > 4000) {
	        return tipoDesconto[2];
	    } else {
	        return null; 
	    }
	}
}
