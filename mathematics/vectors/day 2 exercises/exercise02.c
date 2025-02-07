// Crie um vetor de 6 números, descubra sua media, desvio padrão e a soma de todos os elementos

#include <stdio.h>
#include <math.h>


int main(){

    // Criando e atribuindo valores ao vetor
    int vetor[10];
    for (int i = 0; i < 10; i++)
    {
        vetor[i] = i + 1;
    }
    
    // Soma de todos os elementos;
    int soma = 0;
    for (int i = 0; i < 10; i++)
    {
        soma += vetor[i];
    }
    
    // Descobrindo a media
    int media = soma / (sizeof(vetor) / sizeof(vetor[0]));

    // Descobrindo o desvio padrao
    float desvio_padrao;
    int x = 0;
    for (int i = 0; i < 10; i++)
    {
        x += (media - vetor[i]) * (media - vetor[i]);

    }
    desvio_padrao = x / (sizeof(vetor) / sizeof(vetor[0]));
    desvio_padrao = sqrt(desvio_padrao);

    printf("A soma de todos os elementos do vetor deu = %d, a média do vetor é de = %d, e seu desvio padrão é de +- = %.2f", soma, media, desvio_padrao);
    return 0;
}