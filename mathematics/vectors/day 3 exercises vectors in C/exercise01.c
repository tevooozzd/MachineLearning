// Crie um vetor de 8 elementos e rotacione para a esquerda
#include <stdio.h>

void moverEsquerda(int vetor[], int n) {
    // Desloca todos os elementos uma posição à esquerda
    int x = vetor[0];
    for (int i = 1; i < n; i++) {
        vetor[i - 1] = vetor[i];  // Corrigido para mover os elementos corretamente
    }
    vetor[n - 1] = x;  // Coloca o primeiro elemento no final
}



int main() {
    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int tamanho_vetor = sizeof(vetor) / sizeof(vetor[0]);

    printf("Vetor antes de mover: ");
    for (int i = 0; i < tamanho_vetor; i++) {
        printf("%d ", vetor[i]);
    }

    moverEsquerda(vetor, tamanho_vetor);  // Move para a esquerda

    printf("\nVetor depois de mover para a esquerda: ");
    for (int i = 0; i < tamanho_vetor; i++) {
        printf("%d ", vetor[i]);
    }



    return 0;
}
