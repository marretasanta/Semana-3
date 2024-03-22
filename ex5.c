#include <stdio.h>

int main() {
    int numero, somaDivisores = 0;

    // Solicita que o usuário insira um número inteiro
    printf("Escreva um número inteiro: ");
    scanf("%d", &numero);

    // Calcula a soma dos divisores do número
    for (int i = 1; i <= numero / 2; i++) {
        if (numero % i == 0) {
            somaDivisores += i;
        }
    }

    // Verifica se o número é perfeito
    if (somaDivisores == numero) {
        printf("%d é um número inteiro perfeito\n", numero);
    } else {
        printf("%d NÃO é um número inteiro perfeito\n", numero);
    }

    return 0;
}