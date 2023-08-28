#include <stdio.h>

int count(int array[], int t, int busca) {
    int c = 0;
    for (int i = 0; i < t; i++) {
        if (array[i] == busca) {
            c++;
        }
    }
    return c;
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

    int busca;
    printf("Digite o número de busca: ");
    scanf("%d", &busca);

    int o = count(array, t, busca);
    printf("O número %d ocorre %d vezes no array.\n", busca, o);

    return 0;
}