#include <stdio.h>

int main() {
    int idades[5], i, soma = 0, contador = 0;
    float media;

    // ler as idades e calcular a soma
    for (i = 0; i < 5; i++) {
        printf("Digite a idade da pessoa %d: ", i+1);
        scanf("%d", &idades[i]);
        soma += idades[i];
    }

    // calcular a média
    media = (float)soma / 5;

    // exibir a média
    printf("A media das idades e: %.2f\n", media);

    // exibir as idades maiores que 18 anos
    printf("Idades maiores que 18 anos: ");
    for (i = 0; i < 5; i++) {
        if (idades[i] > 18) {
            printf("%d ", idades[i]);
            contador++;
        }
    }

    // se não houver nenhuma idade maior que 18, exibir uma mensagem
    if (contador == 0) {
        printf("Nenhuma idade maior que 18 anos.");
    }

    return 0;
}
