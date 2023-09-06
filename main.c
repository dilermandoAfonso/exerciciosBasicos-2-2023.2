
#include <stdio.h>

void ordenacao();

int main()
{
    int vetor[] = {10, 55, 20, 2, 33, 8, 355, 125, 77, 242};
    int tamanho = 10; 
    
    ordenacao(vetor, tamanho);
    
    printf("Elementos: ");
    
    for(int i;i<tamanho;i++){
        printf("%d | ",vetor[i]);
    }
    return 0;
}

void ordenacao(int vetor[], int tamanho){
    int i, j, aux;
    for (i = 0; i < tamanho-1; i++) {
        for (j = i+1; j < tamanho; j++) {
            if (vetor[j] < vetor[i]) {
                aux      = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}



