// Crie um vetor de 10 elementos, printe do index 0-3, o ultimo e todos os numeros com index par


#include <stdio.h>

int main(){

    // Criando e atribuindo valores ao vetor
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 1;
    }

    // Printando os 3 primeiros elemtentos (0-2 indexs)
    for (int i = 0; i < 3; i++)
    {
        printf("O vetor %d possui o valor de =  %d\n", i, arr[i]);
    }

    // Printando o ultimo elemento do vetor
    printf("O ultimo elemento (index %d) do vetor possui o valor de = %d\n", (sizeof(arr) / sizeof(arr[0]) - 1), arr[(sizeof(arr) / sizeof(arr[0]) - 1)]);
    
    // Printando todos os elementos pares do vetor
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            printf("O array %d é par e seu valor é de %d\n", i, arr[i]);
        }
        
    }
    

    return 0;
}