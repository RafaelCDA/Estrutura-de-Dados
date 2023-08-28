#include <stdio.h>

void mm(int array[], int tamanho, int *menor, int *maior) {
    *menor = array[0];
    *maior = array[0];

    for (int i = 1; i < tamanho; i++) {
        if (array[i] < *menor) {
            *menor = array[i];
        }
        if (array[i] > *maior) {
            *maior = array[i];
        }
    }
}

int main() {
    int t;
    printf("Digite o tamanho do array: ");
    scanf("%d", &t);

    int array[t];
    printf("Digite os elementos do array:\n");
    for (int i = 0; i < t; i++) {
        scanf("%d", &array[i]);
    }

    int m, M;
    mm(array, t, &m, &M);

    printf("O menor elemento do array é: %d\n", m);
    printf("O maior elemento do array é: %d\n", M);

    return 0;
}