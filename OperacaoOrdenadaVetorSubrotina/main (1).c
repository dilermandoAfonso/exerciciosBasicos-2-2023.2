
#include <stdio.h>
#include <string.h>

void insercaoNoVetor();
void exclusaoNoVetor();

int main()
{
    /*Implementa no método main a entrada dos valores no vetor
    e pelo menos duas operações de exclusão.*/
    
    int tamanho, indice, opcao;
      
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);
    
    int vetor[tamanho];
    
    for(int i = 0; i<tamanho;i++) {
        do {
        printf("%d° número: ", i+1);
        scanf("%d", &vetor[i]);
        if(vetor[i]<=0){
            printf("O número precisa ser maior que zero...\n");
        }
        } while (vetor[i]<=0);
    }
    
    insercaoNoVetor(vetor, tamanho);
    
    printf("Elementos: ");
    
    for(int i = 0;i<tamanho;i++){
        printf("%d | ", vetor[i]);
    }
    
    printf("\n\nDeseja excluir um valor?\n1.Sim\n2.Não\nR.: ");
    scanf("%d", &opcao);
    
    switch(opcao){
        case 1: 
            printf("\nInforme o índice de 0 à %d: ", tamanho-1);
            scanf("%d", &indice);
            
            exclusaoNoVetor(vetor, indice);
            printf("Elementos: ");
            
            for(int i;i<tamanho;i++){
                printf("%d | ", vetor[i]);
            }
            
            printf("\n\nDeseja excluir outro valor?\n1.Sim\n2.Não\nR.: ");
            scanf("%d", &opcao);
            
            switch(opcao){
                case 1:
                    
                    printf("\nInforme o índice, de 0 à %d: ", tamanho-1);
                    scanf("%d", &indice);
                    
                    exclusaoNoVetor(vetor, indice);
                    printf("Elementos: ");
                    
                    for(int i;i<tamanho;i++){
                        printf("%d | ", vetor[i]);
                    }
                    break;
                case 2:
                    return 0;
                    break;
                }
            break;
        case 2:
            return 0;
            break;
    }
    
    return 0;
}

void insercaoNoVetor(int vetor[], int tamanho) {
    
    /*Escreva uma sub rotina para receber um número inteiro 
    e armazená-lo ordenadamente no vetor. Obs: Considerar que
    o número recebido é maior que 0 (zero).*/
    
    int i, j, aux;
    
    for(i = 0;i<tamanho-1;i++){
        for(j = i+1;j<tamanho;j++){
            if(vetor[j]<vetor[i]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}

void exclusaoNoVetor(int vetor[], int indice) {
    
    /*Escreva uma sub rotina para receber um número inteiro correspondente 
    a um índice do vetor. Excluir o elemento desta posição (remanejando os 
    elementos das posições posteriores e colocando 0 na última posição ocupada).*/

    if(vetor[indice]>0){
        vetor[indice]=0;
    } 
    
    int i, j, aux,tamanho;
    
    for(i = 0;i<tamanho-1;i++){
        for(j = i+1;j<tamanho;j++){
            if(vetor[j]<vetor[i]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}