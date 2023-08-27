#include <stdio.h>

int soma_array(int arr[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += arr[i];
    }
    return soma;
}

int main() {
    int array_exemplo[] = {7, 8, 9, 2};
    int tamanho = sizeof(array_exemplo) / sizeof(array_exemplo[0]);

    int resultado = soma_array(array_exemplo, tamanho);
    printf("Saida: %d\n", resultado);  // Saída: 27

    return 0;
}