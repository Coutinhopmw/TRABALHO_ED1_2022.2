#include "Queue.h"
#include <stdlib.h>
#define MAX 10
/**
 * qty = Contador da quantidade de elementos na fila.
 * head = Aponta para o elemento no início da fila.
 * tail = Aponta para o próximo elemento disponível na fila.
 */
struct no
{
    int id, copia, origem;
    char nome[10];
};
struct queue
{
    int qty, head, tail;
    No data[MAX];
};

Queue *Queue_create()
{
    Queue *new = calloc(1,sizeof(Queue));
    if (new)
    {
        new->qty = 0;
        new->head = 0;
        new->tail = 0;
    }
    return new;
}

void Queue_destroy(Queue *way)
{
    free(way);
}

// Função responsável pelo adição dos arquivos na fila.
int Queue_enqueue(Queue *way, No info)
{
    int i;
    if (Queue_full(way))
    {
        return 0;
    }
    way->data[way->tail] = info;
    if (info.origem == 1)
    {
        No aux = way->data[way->tail];
        for (i = way->tail; i >= 0; i--)
        {
            way->data[i] = way->data[i - 1];
        }
        if (i == 0)
        {
            way->data[i] = way->data[MAX - 1];
            i = MAX - 1;
        }
    }
    way->tail = (way->tail + 1) % MAX;
    way->qty++;
    return 1;
}

// Função responsável pela eliminação dos arquivos da fila.
int Queue_dequeue(Queue *way, No *info)
{
    if (Queue_empty(way))
    {
        return 0;
    }
    *info = way->data[way->head];
    way->head = (way->head + 1) % MAX;
    way->qty--;
    return 1;
}

int Queue_head(Queue *way, No *info)
{
    if (Queue_empty(way))
    {
        return 0;
    }
    *info = way->data[way->head];
    return 1;
}
/*==============================================
    FUNÇÕES AUXILIARES
  ==============================================*/
int Queue_full(Queue *way)
{
    return way->qty == MAX;
}
int Queue_empty(Queue *way)
{
    return way->qty == 0;
}
int Queue_qty(Queue *way)
{
    return way->qty;
}