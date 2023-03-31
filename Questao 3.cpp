#include <stdio.h>

int main() {
    int num, i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("Numeros em ordem decrescente:\n");

    for (i = num; i >= 0; i--) {
        printf("%d\n", i);
    }

    return 0;
}


