#include<stdio.h>
#include<stdlib.h>
#include"lista.h"

void inicializa_lista(Lista *l,int t){
    l->head = NULL;
    l->taminfo = t;
    l->quantidade = 0;
}

int  insere_lista(Lista *l,void *info){
    No *p = malloc(sizeof(No));
    if(p==NULL){
        return 0; /*Falta de memoria*/
    }
    p->info = malloc(l->taminfo);
    if(p->info == NULL){
        free(p);
        return 0;
    }
    memcpy(p->info, info,l->taminfo);
    l->head = p;
    p->prox = NULL;
    l->quantidade ++;
    return 1;
}