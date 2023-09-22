#include <stdio.h>

void imprime_n_a_0(int n){
    if(n == 0){
        return;
    }

    printf("%d ", n);
    imprime_n_a_0(n-1);

}

int main (){
    int n;

    scanf("%d", &n);

    imprime_n_a_0(n);

    printf("\n");

    return 0;
}