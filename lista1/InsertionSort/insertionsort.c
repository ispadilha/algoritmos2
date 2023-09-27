#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void insertionSort(int v[], int tam) {
    for (int i = 1; i < tam; i++) {
        int chave = v[i];
        int j = i - 1;
        
        while (j >= 0 && v[j] > chave) {
            v[j + 1] = v[j];
            j--;
        }
        
        v[j + 1] = chave;
    }
}

int main() {
    int i, n;

    printf("Insira o valor de n para o tamanho do vetor: ");
    scanf("%d", &n);

    int v[n];

    for (i = 0; i < n; i++) {
        v[i] = rand() % (MAX + 1);
    }

    printf("\nVetor gerado: \n");

    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    insertionSort(v, n);

    printf("\n\nVetor ordenado: \n");

    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    printf("\n");

    return 0;
}
