#include <stdio.h>
 
int main() {
    int tamanho = 7;
    int vetor[tamanho];
    int i;
    int j;
    int temp;
 
    // Solicite ao usuário que insira 7 valores inteiros
    printf("Digite 7 valores inteiros:\n");
    for (i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }
 
    // Organize o vetor em ordem crescente (usando o algoritmo de classificação de bolha)
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                // Troca os elementos se estiverem fora de ordem
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
 
    // Imprima o vetor ordenado
    printf("Valores organizados em ordem crescente:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
 
    return 0;
}
