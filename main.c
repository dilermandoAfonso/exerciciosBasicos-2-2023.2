//Defina uma sub rotina que retorne o número de maior valor armazenado no vetor
//Defina uma sub rotina que retorne o número de menor valor armazenado no vetor
//Mostre o valor do maior número
//Mostre o valor do maior número

#include <stdio.h>

int retornarMaior();
int retornarMenor();

int main()
{
    int i;
    int vetor[4]; 
    
    for(int i=0;i<4;i++) {
        do {
            printf("Digite o número: ");
            scanf("%d", &vetor[i]);
            
            if (vetor[i]<0){
                printf("Precisa ser número positivo\n");
            }
        } while(vetor[i]<0);
        
    }
    
    int resultadoMaior = retornarMaior(vetor, 4);
    printf("Número Maior: %d\n", resultadoMaior);
    
    int resultadoMenor = retornarMenor(vetor, 4);
    printf("Número Menor: %d", resultadoMenor);
}

int retornarMaior(int vetor[], int n) 
{
    int numMaior = vetor[0];
    
    for(int i=0;i<4;i++){
        if(vetor[i]>numMaior){
            numMaior = vetor[i];
        }
    }
    
    return numMaior;
}

int retornarMenor(int vetor[], int n) 
{
    int numMenor = vetor[0];
    
    for(int i=0;i<4;i++){
        if(vetor[i]<numMenor){
            numMenor = vetor[i];
        }
    }
    
    return numMenor;
}