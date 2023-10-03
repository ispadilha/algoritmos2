#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void shellSort(int v[], int tam) {
    int h = 1;
    while (h < tam) {
        h = 3 * h + 1;
    }

    while (h > 0) {
        h = (h - 1) / 3;
        for (int i = h; i < tam; i++) {
            int aux = v[i];
            int j = i;
            while (j > h - 1 && v[j - h] > aux) {
                v[j] = v[j - h];
                j = j - h;
            }
            v[j] = aux;
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

    shellSort(v, n);

    printf("\n\nVetor ordenado: \n");

    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    printf("\n");

    return 0;
}
