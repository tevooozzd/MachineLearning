// Crie um vetor com 10 elementos, descubra a média dos números impares, e some todos os números pares

#include <stdio.h>

int main(){

    // Criando e preenchendo o vetor com números de 1-10
    int vetor[10];
    for (int i = 0; i < 10; i++)
    {
        vetor[i] = i +1;
    }
    
    // Descobrindo a média dos numeros ímpares
    int numeros_impares = 0;
    int media_impares = 0;
    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] % 2 != 0)
        {
            media_impares += vetor[i];
            numeros_impares +=  1;
        }
        
    }
    media_impares = media_impares / numeros_impares;

    // Descobrindo a soma dos elementos pares
    int soma_pares = 0;
    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            soma_pares += vetor[i];
        }
        
    }
    
    // Printando 
    printf("A media dos números impares foi de = %d, e a soma dos núemeros pares foi de = %d", media_impares, soma_pares);



    return 0;
}