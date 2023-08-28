#include <stdio.h>
#include <string.h>

int existeStringNoArray(const char *array[], int tamanho, const char *busca) {
    for (int i = 0; i < tamanho; i++) {
        if (strcmp(array[i], busca) == 0) {
            return 1;  
        }else{return 0;  
          
        }
    }
    
}

int main() {
    const int tamanhoMaximo = 5;
    const char *strings[tamanhoMaximo];

    printf("Digite %d strings:\n", tamanhoMaximo);
    for (int i = 0; i < tamanhoMaximo; i++) {
        char temp[100];  
        scanf("%s", temp);
        strings[i] = strdup(temp);  
    }

    char busca[100];
    printf("Digite a string de busca: ");
    scanf("%s", busca);

    if (existeStringNoArray(strings, tamanhoMaximo, busca)) {
        printf("A string de busca existe no array.\n");
    } else {
        printf("A string de busca não existe no array.\n");
    }

  
    for (int i = 0; i < tamanhoMaximo; i++) {
        free((void *)strings[i]);
    }

    return 0;
}