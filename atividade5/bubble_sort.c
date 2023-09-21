#include "bubble_sort.h"

void swap(char **xp, char **yp) {
    char *temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(char *arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (strcmp(arr[j], arr[j+1]) > 0) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}