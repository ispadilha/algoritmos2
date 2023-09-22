#include <stdio.h>

void imprime_0_a_n(int n){
    if(n < 0){
        return;
    }

    imprime_0_a_n(n-1);
    printf("%d ", n);

}

int main (){
    int n;

    scanf("%d", &n);

    imprime_0_a_n(n);

    printf("\n");

    return 0;
}