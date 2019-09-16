#include <stdio.h>
#include <stdlib.h>
#include "listadpl.h"


void main(void) {

    TipoListaDpl* lista;
    TipoItem* matheus;
    lista = NULL;
    matheus = InicializaTipoItem("Matheus", 2019202297, "Rua Carijos");
    TipoItem* maria = InicializaTipoItem("maria", 123, "rua da maria");
    TipoItem* sofia = InicializaTipoItem("sofia", 2345, "rua da sofia");
    TipoItem* jose = InicializaTipoItem("jose", 4523, "rua do jose");
    TipoItem* joao = InicializaTipoItem("joao", 34, "rua do joao");
    TipoItem* catarina = InicializaTipoItem("catarina", 987, "rua da catarina");

    lista = Insere(matheus, lista);
    Insere(maria, lista);
    Insere(sofia, lista);
    Insere(jose, lista);
    Insere(joao, lista);
    Insere(catarina, lista);
    Imprime(lista);
}