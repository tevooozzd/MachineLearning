// Crie um vetor de 7 elementos encontre e imprima o maior e menor número

#include <stdio.h>

int main(){
    
    // Criando o vetor, M e m número 
    int vetor[7];
    int M,m;

    // Atribuindo valores a cada index
    for (int i = 0; i < 7; i++)
    {
        vetor[i] = i;
    }
   
    // Atribuindo o valor do 1 index[0]
    M = m = vetor[0];


    
    // Procurando o maior e menor valor
    for (int i = 0; i < 7; i++)
    {
        if(vetor[i] > M){
            M = vetor[i];
        }

        if(vetor[i] < m){
            m = vetor[i];
        }
    }
    
    // Printando o maior e menor número
    printf("O maior valor presente no vetor é de %d, e o menor valor é de %d", M, m);


    return 0; 
}