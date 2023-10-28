#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(int argc, char* argv[]) {
    No* n0 = no('C', NULL);
    No* n1 = no('E', NULL);
    No* n2 = no('A', no('D', no('B', no('X', no('Z', NULL)))));
    No* n3 = no('U', NULL);
    lista_inserir_no(n0, n2);
    lista_inserir_no(n0, n1);
    lista_inserir_no(n0, n3);

    printf("Lista Original: ");
    lista_imprimir(n0);
    printf("\nQuantidade de nós: %d\n", lista_quantidade_nos(n0));

    No* n_copia = lista_copiar(n0);
    printf("Cópia da Lista: ");
    lista_imprimir(n_copia);
    printf("\n");

    lista_concatenar(n0, n_copia);
    printf("Lista Concatenada: ");
    lista_imprimir(n0);
    printf("\n");


    char valor_busca = 'B';
    int existe = lista_verificar_existencia(n0, valor_busca);
    printf("Existe '%c' na lista: %s\n", valor_busca, (existe == 1) ? "Sim" : "Não");

   
    valor_busca = 'C';
    int ocorrencias = lista_verificar_ocorrencias(n0, valor_busca);
    printf("Ocorrências de '%c' na lista: %d\n", valor_busca, ocorrencias);

    printf("Lista Inversa: ");
    lista_imprimir_inversa(n0);
    printf("\n");

    
    lista_inserir_no_i(n0, 2, 'M');
    printf("Lista com nó inserido na posição 2: ");
    lista_imprimir(n0);
    printf("\n");
}