
#include <stdio.h>

int main()
{
    int numMaior, numMenor;
    int vetor[4];
    int i;
    
    for(i=0;i<4;i++) {
        do {
            printf("Digite o número: ");
            scanf("%d", &vetor[i]);
            
            if (vetor[i]<0){
                printf("Precisa ser número positivo\n");
            }
        } while(vetor[i]<0);
        
        if(i==0){
            numMaior = vetor[i];
            numMenor = vetor[i];
        }
        
        if (vetor[i]>numMaior) {
            numMaior = vetor[i];
        } else if (vetor[i]<numMenor) {
            numMenor = vetor[i];
        }
    }
    
    printf("Número menor: %d\n", numMenor);
    printf("Número maior: %d", numMaior);
}
