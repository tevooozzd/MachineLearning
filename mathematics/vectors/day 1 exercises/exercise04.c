// Dado um vetor de 0-5 (6 elementos), inverta ele

#include <stdio.h>

int main(){

    // Criando o vetor e dando valores
    int vetor[6];
    for (int i = 0; i < 6; i++)
    {
        vetor[i] = i;
    }

    // Printando antes
    for (int i = 0; i < 6; i++)
    {
        printf("Array[%d] tem o valor de %d\n", i , vetor[i]);
    }
        
    printf("\n");
    
    // Criando vetor inverso e dando os valores
    int vetor_inverso[6];
    for (int i = 0; i < 6; i++)
    {
        vetor_inverso[5 - i] = vetor[i];
    }



    // Printando depois
    for (int i = 0; i < 6; i++)
    {
        printf("Array[%d] tem o valor de %d\n", i , vetor_inverso[i]);
    }
    
    


    return 0;
}