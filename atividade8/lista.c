#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

No* no(char valor, No* proximo_no) {
    No* novo_no = malloc(sizeof(No));
    novo_no->valor = valor;
    novo_no->proximo_no = proximo_no;
    return novo_no;
}

void lista_inserir_no(No* L, No* no) {
    if (L != NULL) {
        if (L->proximo_no == NULL) {
            L->proximo_no = no;
        } else {
            lista_inserir_no(L->proximo_no, no);
        }
    }
}

void lista_imprimir(No* L) {
    if (L != NULL) {
        printf("%c ", L->valor);
        lista_imprimir(L->proximo_no);
    }
}

int lista_quantidade_nos(No* L) {
    if (L != NULL) {
        return 1 + lista_quantidade_nos(L->proximo_no);
    }
    return 0;
}

No* lista_copiar(No* L) {
    if (L != NULL) {
        return no(L->valor, lista_copiar(L->proximo_no));
    }
    return NULL;
}

void lista_concatenar(No* L, No* Lc) {
    lista_inserir_no(L, Lc);
}

void lista_liberar(No* L) {
    if (L != NULL) {
        lista_liberar(L->proximo_no);
        free(L);
    }
}

int lista_verificar_existencia(No* L, char valor_busca) {
    if (L == NULL) {
        return 0;
    }
    
    if (L->valor == valor_busca) {
        return 1;
    }
    
    return lista_verificar_existencia(L->proximo_no, valor_busca);
}

int lista_verificar_ocorrencias(No* L, char valor_busca) {
    if (L == NULL) {
        return 0;
    }

    int count = (L->valor == valor_busca) ? 1 : 0;
    return count + lista_verificar_ocorrencias(L->proximo_no, valor_busca);
}

void lista_imprimir_inversa(No* L) {
    if (L == NULL) {
        return;
    }
    
    lista_imprimir_inversa(L->proximo_no);
    printf("%c ", L->valor);
}

void lista_inserir_no_i(No* L, int i, char valor) {
    if (i == 0 || L == NULL) {
        No* novo_no = no(valor, L->proximo_no);
        L->proximo_no = novo_no;
        return;
    }

    lista_inserir_no_i(L->proximo_no, i - 1, valor);
}

void lista_remover_no_i(No* L, int i) {
    if (i == 0 || L == NULL || L->proximo_no == NULL) {
        return;
    }

    if (i == 1) {
        No* temp = L->proximo_no;
        L->proximo_no = temp->proximo_no;
        free(temp);
        return;
    }

    lista_remover_no_i(L->proximo_no, i - 1);
}

void lista_remover_no(No* L, char valor_busca) {
    if (L == NULL) {
        return;
    }

    if (L->proximo_no != NULL && L->proximo_no->valor == valor_busca) {
        No* temp = L->proximo_no;
        L->proximo_no = temp->proximo_no;
        free(temp);
        lista_remover_no(L, valor_busca);
    } else {
        lista_remover_no(L->proximo_no, valor_busca);
    }
}