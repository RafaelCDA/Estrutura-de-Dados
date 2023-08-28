#include <stdio.h>
#include <stdlib.h>

int *multiplicarArrays(int array1[], int array2[], int t) {
    int *r = (int *)malloc(t * sizeof(int));
    
    for (int i = 0; i < t; i++) {
        r[i] = array1[i] * array2[i];
    }
    
    return r;
}

int main() {
    int t;
    printf("Digite o tamanho dos arrays: ");
    scanf("%d", &t);

    int array1[t];
    int array2[t];

    printf("Digite os elementos do primeiro array:\n");
    for (int i = 0; i < t; i++) {
        scanf("%d", &array1[i]);
    }

    printf("Digite os elementos do segundo array:\n");
    for (int i = 0; i < t; i++) {
        scanf("%d", &array2[i]);
    }

    int *r = multiplicarArrays(array1, array2, t);

    printf("Resultado da multiplicaaoo:\n");
    for (int i = 0; i < t; i++) {
        printf("%d ", r[i]);
    }
    printf("\n");

    free(r);

    return 0;
}