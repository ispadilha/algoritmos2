#include <stdio.h>

void move(int n, int p1, int p2) {
    printf("\nMoveu disco %d do pino %d para o pino %d", n, p1, p2);
}

/* 
    Move da pilha 1 para pilha 2 usando aux.
    Retorna o numero de movimentos feitos.
    n eh o numero de discos.
*/
int hanoi(int n, int p1, int p2, int aux) {
    int cont = 0;
    
    if (n == 1) {
        move(1, p1, p2);
        cont = 1;
    } else {
        cont += hanoi(n - 1, p1, aux, p2);   // Mova (n-1) discos para auxiliar usando p2 como destino
        move(n, p1, p2);                     // Mova o disco n para o destino
        cont++;                               // Incrementa o contador de movimentos
        cont += hanoi(n - 1, aux, p2, p1);   // Mova (n-1) discos de auxiliar para destino usando p1 como auxiliar
    }
    
    return cont;
}

int main() {
    int cont, n;

    printf("\nInsira o numero de discos da torre de Hanoi: ");
    scanf("%d", &n);

    cont = hanoi(n, 1, 3, 2);
    printf("\n\nTerminou fazendo %d movimentos\n\n", cont);

    return 0;
}
