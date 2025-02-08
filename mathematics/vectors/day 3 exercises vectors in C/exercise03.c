// Crie um vetor com 20 elementos e troce o valor de todos os elementos que sejam multiplos de 3 por 0

#include <stdio.h>
int main(){
    // Criando o vetor
    int vetor[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,16,17,18,19,20};
    int tamanho_vetor = sizeof(vetor) / sizeof(vetor[0]);
    
    
    // Filtrando todo os números múltiplos de 3 e colocando o valor de 0
    for (int i = 0; i < tamanho_vetor; i++)
    {
        if (vetor[i] % 3 ==  0)
            vetor[i] = 0;
    }


    for (int i = 0; i < tamanho_vetor; i++)
    {
        printf("Depois de filtrar os elementos múltiplos de 3: %d\n" , vetor[i]);
    }
    
    


    return 0;
}