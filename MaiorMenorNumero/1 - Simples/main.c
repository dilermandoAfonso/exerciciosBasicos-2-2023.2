
#include <stdio.h>

int main()
{   
    int num = 0;
    int numMaior = 0;
    int numMenor = 9999999;
    
    for(int i=0;i<4;i++) {
        
        do {
            printf("Digite o número:");
            scanf("%d",&num);
            if(num<0) {
                printf("O número deve ser positivo\n\n");
            }
        } while(num<0);
        
        if (num > numMaior){
            numMaior = num;
        }
        else if (num < numMenor) {
            numMenor = num;
        }
    } 
    
    printf("Número Maior: %d\n", numMaior);
    printf("Número Menor: %d", numMenor);
}
