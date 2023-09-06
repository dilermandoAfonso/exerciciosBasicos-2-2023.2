package iQA;

public class IndiceQualidadeAr {
	double indice; 
	String classificacao;
	String efeitos; 
	
	void definirClassificacao() {
		if (indice<=50) {
			classificacao = "Boa";
		} else if (indice<=100) {
			classificacao = "Regular";
		} else if (indice<=199) {
			classificacao = "Inadequada";
		} else if (indice<=299) {
			classificacao = "Má";
		} else if (indice<=399) {
			classificacao = "Péssima";
		} else if (indice>=400) {
			classificacao = "Crítica";
		}
	} 
	
	void definirEfeitos() {
		if(indice<50) {
			efeitos = "Ausência de sintomas.";
		} else if(indice<=100) {
			efeitos = "Ausência de sintomas.";
		} else if(indice<=199) {
			efeitos = "Leve agravamento dos sintomas de pessoas susceptíveis...";
		} else if(indice<=299) {
			efeitos = "Decréscimo da resistência física e significativo agravamento...";
		} else if(indice<=399) {
			efeitos = "Aparecimento prematuro de certas doenças";
		} else if(indice>=400) {
			efeitos = "Morte prematura de pessoas doentes e pessoas idosas";
		}
	}
	
	double compararIndice(double indiceAnterior) {
		double soma = indice + indiceAnterior;
		return soma; 
	}
}
