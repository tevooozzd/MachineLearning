// Crie um vetor de 5 elementos, inicialize com números e printe todos


#include <stdio.h>

int main(){

    // Inicializa o vetor
    int vetor[5];

    // Preenche cada index do vetor
    for (int i = 0; i < 5; i++)
    {
        vetor[i] = i;
    }

    // Printa cada index do vetor
    for (int i = 0; i < 5; i++)
    {
        printf("O Array[%d] possui valor de %d\n", i, vetor[i]);
    }


    return 0;
}