#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void selectionSort(int v[], int tam) {
    for (int i = 0; i < tam - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < tam; j++) {
            if (v[j] < v[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            int temp = v[i];
            v[i] = v[min_index];
            v[min_index] = temp;
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

    selectionSort(v, n);

    printf("\n\nVetor ordenado: \n");

    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    printf("\n");

    return 0;
}
