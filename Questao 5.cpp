#include <stdio.h>

int main() {
    int numero, soma = 0;
    
    while (soma < 30) {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        soma += numero;
    }
    
    printf("A soma dos numeros informados e %d.\n", soma);
    
    return 0;
}

