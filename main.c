#include <stdio.h>
#include "queue.h"

typedef struct no
{
    int id, copia, origem;
    char nome[10];
} No;

// OPERAÇÕES
void pedido_de_impressao(Queue *way, No doc, int Id)
{
    if (!Queue_enqueue(way, doc))
    {
        printf("\nERRO-fila cheia\n");
    }
    else
    {
        printf("\nDocumento adicionado a fila\n");
    }
}
void impressora_pronta(Queue *way, No doc){
   
}
void cancelar_impressao();
int busca();
void mostra_fila(Queue *way){
    Queue_prints(way);
}

int main()
{
    int i = 0, temp = 0, op, id = 0;
    Queue *way = Queue_create();
    char prints[10];
    No doc;

    do
    {
        printf("\nInserir elemneto digite (1)\nimpressora pronta (2)\ncancelar impressao (3)\nBusca (4)\nMostrar fila de impressao (5)\nsair do menu operações (-1)\n\n >\t");
        scanf("%d", &op);
        if (op == 1)
        {
            printf("\nDigite o nome do documento:\t");
            scanf("%s", &doc.nome[10]);
            printf("Digite o num de copias:\t");
            scanf("%d", &doc.copia);
            printf("\nOrigem chefia (1) ou comum (0):\t");
            scanf("%d", &doc.origem);
            id++;
            for (i = 0; i < doc.copia; i++)
            {
                pedido_de_impressao(way, doc, id);
            }
        }
        if (op == 2)
        {
             if (!Queue_head(way, &doc))
            {
                puts("\nERRO -- fila vazia\n");
            }
            else
            {
                Queue_dequeue(way, &doc);
                printf("\nDocumento impresso: [%s]\n\n", doc.nome);
            }
        }
        if(op == 3)
        {

        }
        if(op == 4)
        {
            Queue_prints(way);
        }
        if(op == 5)
        {

        }
    } while (op != -1);
}