#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Uso: %s <num1> <num2> ... <numN>\n", argv[0]);
        return 1;
    }

    int numCount = argc - 1;
    int *numbers = (int *)malloc(numCount * sizeof(int));

    if (numbers == NULL) {
        perror("Erro ao alocar memória");
        return 1;
    }


    for (int i = 1; i <= numCount; i++) {
        numbers[i - 1] = atoi(argv[i]);
    }

    bubbleSort(numbers, numCount);

 
    printf("Números ordenados: ");
    for (int i = 0; i < numCount; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

 
    free(numbers);

    return 0;
}
