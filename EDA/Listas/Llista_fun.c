#include<stdio.h>
#include<stdlib.h>
#include"lista.h"

void inicializa_lista(Lista *l, int info){
    l->head = NULL;
    l->quantidade = 0;
    l->taminfo = info;
}

int insere_inicio(Lista *l, void *info){
    Elemento *p = malloc(sizeof(Elemento));
    if(p==NULL){
        free(p);
    }
    memcpy(p->info, info,l->taminfo);
    p->prox = l->head;
    l->head = p;
    l->quantidade ++;
    return 1;
}

int remove_inicio(Lista *l, void *info){
    if(lista_vazia(*l)){
        return ERRO;
    }
    Elemento *p = l->head;
    memcpy (info,p->info,l->taminfo);
    l->head = p->prox;
    free(p->info);
    free(p);
    l->quantidade --;
    return 1;
}

int insere_fim(Lista *l, void *info){

}