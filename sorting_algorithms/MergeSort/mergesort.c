#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void merge(int v[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Cria arrays temporários
    int L[n1], R[n2];

    // Copia os dados para os arrays temporários L[] e R[]
    for (i = 0; i < n1; i++)
        L[i] = v[left + i];
    for (j = 0; j < n2; j++)
        R[j] = v[mid + 1 + j];

    // Merge dos arrays temporários de volta para v[left..right]
    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            v[k] = L[i];
            i++;
        } else {
            v[k] = R[j];
            j++;
        }
        k++;
    }

    // Copia os elementos restantes de L[], se houver
    while (i < n1) {
        v[k] = L[i];
        i++;
        k++;
    }

    // Copia os elementos restantes de R[], se houver
    while (j < n2) {
        v[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int v[], int left, int right) {
    if (left < right) {
        // Calcula o ponto médio do array
        int mid = left + (right - left) / 2;

        // Ordena as metades esquerda e direita
        mergeSort(v, left, mid);
        mergeSort(v, mid + 1, right);

        // Combina as partes ordenadas
        merge(v, left, mid, right);
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

    mergeSort(v, 0, n - 1);

    printf("\n\nVetor ordenado: \n");

    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    printf("\n");

    return 0;
}
