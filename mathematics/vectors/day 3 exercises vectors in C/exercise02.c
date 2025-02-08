// Crie um vetor e rotacione para a direita

#include <stdio.h>


void moverDireita(int vetor[], int n){
    int x = vetor[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        vetor[i] = vetor[i - 1];
    }
    vetor[0] = x;
}

int main(){
    int vetor[] = {1,2,3,4,5,6,7,8};
    int tamanho_vetor = sizeof(vetor) / sizeof(vetor[0]);

    printf("Vetor antes de mover: ");
    for (int i = 0; i < tamanho_vetor; i++) {
        printf("%d ", vetor[i]);
    }

    moverDireita(vetor, tamanho_vetor);  // Move para a esquerda

    printf("\nVetor depois de mover para a direita: ");
    for (int i = 0; i < tamanho_vetor; i++) {
        printf("%d ", vetor[i]);
    }



    return 0;
}