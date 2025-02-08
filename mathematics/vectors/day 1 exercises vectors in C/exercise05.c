// Crie um vetor de 8 elementos descubra sua média e printe.

#include <stdio.h>

int main(){

    // Inicializando vetor e variávelmédia
    int vetor[8];
    float media = 0;

    // Dando valores ao vetor
    for (int i = 0; i < 8; i++)
    {
        vetor[i] = i;
    }
    
    // Descobrindo a média
    for (int i = 0; i < 8; i++)
    {
        media += vetor[i];
    }
    printf("A média dos elementos do vetor é de %.2f", media / 8 );
    

    return 0;
}