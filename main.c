#include <stdio.h>
#include "queue.h"

typedef struct no
{
    int id, copia, origem;
    char nome[10];
} No;

// OPERAÇÕES
void pedido_de_impressao(Queue *way, No doc, int Id){
    if(!Queue_enqueue(way, doc))
    {
        printf("\nERRO-fila cheia\n");
    }else{
        printf("\nDocumento adicionado a fila\n");
    }
    
}
void impressora_pronta();
void cancelar_impressao();
int busca();
void mostra_fila();

int main()
{
    int i = 0, temp = 0, op, id = 0;
    Queue *way = Queue_create();
    char prints[10];
    No doc;
    printf("\nInserir elemneto digite (1)\nimpressora pronta (2)\ncancelar impressao (3)\nBusca (4)\nMostrar fila de impressao\n\n >\t");
    scanf("%d", &op);
    if(op==1)
    {
        printf("\nDigite o nome do documento:\t");
        scanf("%s", &doc.nome[10]);
        printf("Digite o num de copias:\t");
        scanf("%d", &doc.copia);
        printf("\nOrigem chefia (1) ou comum (0):\t");
        scanf("%d", &doc.origem);
        id++;
        pedido_de_impressao(way, doc, id);
    }
    if (op==2)
    {
        Queue_head(way, &doc);
        Queue_dequeue(way, &doc);
    }
    


}