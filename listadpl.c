/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>
#include "listadpl.h"
#include <string.h>

struct tipoitem {
    char* nome;
    char* end;
    int mat;
};  

struct tipolistadpl{
    TipoItem* item;
    TipoListaDpl* prox;
    TipoListaDpl* ant;
};

TipoItem* InicializaTipoItem(char* nome, int matricula, char* endereco) {
    TipoItem* item;
    item = (TipoItem*)malloc(sizeof(TipoItem));
    item->nome = (char*)malloc(sizeof( (strlen(nome)+1) * sizeof(char)) );
    item->end = (char*)malloc(sizeof( (strlen(endereco)+1) * sizeof(char)) );

    strcpy(item->nome, nome);
    strcpy(item->end, endereco);
    item->mat = matricula;
    
    return item;
}

TipoListaDpl* Insere (TipoItem* aluno, TipoListaDpl* lista) {
    TipoListaDpl* nova;
    nova->item = aluno;
    nova->prox = lista;
    nova->ant = NULL;
    if (lista == NULL) {
        return nova;
    }
    else {
        lista -> ant = nova;
    }
    return nova;
}

TipoListaDpl* Retira (TipoListaDpl* lista, char* nome) {

}

void Imprime (TipoListaDpl* lista) {
    TipoListaDpl* p;
    for(p = lista ; p != NULL; p = p->prox) {
        printf("Aluno: %s \n endereco: %s \n matricula: %d \n",
        p->item->nome, p->item->end, p->item->mat);
    }

}



TipoListaDpl* libera (TipoListaDpl* lista) {

}