// Crie um vetor com 10 elementos, some todos e printe eles
#include <stdio.h>

int main(){

    // Inicializando vetor e variavel p/ somar
    int vetor[10];
    int soma = 0;

    // Preenchendo os index do vetor com valores
    for (int i = 0; i < 10; i++)
    {
        vetor[i] = i;
    }

    // Somando todos os valores 
    for (int i = 0; i < 10; i++)
    {
        soma += vetor[i];
    }

    // Printando a soma dos valores do vetor
    printf("A soma de todos os elemtnos do vetor foi de %d", soma);


    return 0;
}