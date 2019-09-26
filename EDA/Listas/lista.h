typedef struct no_lista{
    void *info; /*adiciona qualquer tipo de informação*/
    struct no_lista *prox; /*chama novamente a estrutura, para que seja adicionado uma nova info*/
}No;

typedef struct lista{
   No *head;
   int taminfo;
   int quantidade;
}Lista;
