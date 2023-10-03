#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void bubbleSort(int v[], int tam) {
    for (int i = 0; i < tam - 1; i++) {
        for (int j = 0; j < tam - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                // Troca os elementos se estiverem na ordem errada
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
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

    bubbleSort(v, n);

    printf("\n\nVetor ordenado: \n");

    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    printf("\n");

    return 0;
}
