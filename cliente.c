#include <stdio.h>
#include <stdlib.h>
#include "listadpl.h"


void main(void) {

    TipoListaDpl* lista;
    TipoItem* matheus;
    lista = NULL;
    matheus = InicializaTipoItem("Matheus", 2019202297, "Rua Carijos");
    lista = Insere(matheus, lista);
    Imprime(lista);
}