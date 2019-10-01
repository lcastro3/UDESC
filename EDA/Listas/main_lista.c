#include<stdio.h>
#include<stdlib.h>
#include"lista.h"

int main(int argc, char const *argv[]){
    Lista l1;
    inicializa_lista(&l1,sizeof(float));
    float x = 1;
    insere_lista(&l1,&x);
    return 0;
}
