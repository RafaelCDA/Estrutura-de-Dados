#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bubble_sort.h"

#define MAX_WORDS 1000

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <arquivo_de_entrada>\n", argv[0]);
        return 1;
    }

    char *inputFileName = argv[1];
    char *outputFileName = "arq_palavras_ordenado.txt";
    char *words[MAX_WORDS];
    int wordCount = 0;

    
    FILE *inputFile = fopen(inputFileName, "r");
    if (inputFile == NULL) {
        perror("Erro ao abrir o arquivo de entrada");
        return 1;
    }

  
    char word[100];
    while (fscanf(inputFile, "%s", word) != EOF && wordCount < MAX_WORDS) {
        words[wordCount] = strdup(word);
        wordCount++;
    }

  
    fclose(inputFile);

 
    bubbleSort(words, wordCount);

 
    FILE *outputFile = fopen(outputFileName, "w");
    if (outputFile == NULL) {
        perror("Erro ao criar o arquivo de saída");
        return 1;
    }

    
    for (int i = 0; i < wordCount; i++) {
        fprintf(outputFile, "%s\n", words[i]);
        free(words[i]);  
    }

    
    fclose(outputFile);

    printf("Palavras ordenadas com sucesso em %s.\n", outputFileName);

    return 0;
}