#include <stdio.h>

int main() {
    int i, n;

    printf("Digite um valor para n: ");
    scanf("%d", &n);

    printf("Contagem progressiva:\n");
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\nContagem regressiva:\n");
    for (i = n; i >= 1; i--) {
        printf("%d ", i);
    }

    return 0;
}

