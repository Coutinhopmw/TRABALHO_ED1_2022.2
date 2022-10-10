#include "Queue.h"
#include <stdlib.h>
#define MAX 10
/**
 * qty = Contador da quantidade de elementos na fila.
 * head = Aponta para o elemento no início da fila.
 * tail = Aponta para o próximo elemento disponível na fila.
 */

struct queue
{
    int qty, head, tail;
    int data[MAX];
};

Queue *Queue_create()
{
    Queue *new = malloc(sizeof(Queue));
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
int Queue_enqueue(Queue *way, int info)
{
    if (Queue_full(way))
    {
        return 0;
    }
    way->data[way->tail] = info;
    way->tail = (way->tail + 1) % MAX;
    way->qty++;
    return 1;
}

// Função responsável pela eliminação dos arquivos da fila.
int Queue_dequeue(Queue *way, int *info)
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

int Queue_head(Queue *way, int *info)
{
    if (Queue_empty(way))
    {
        return 0;
    }
    *info = way->data[way->head];
    return 1;
}
//função responsável pelo cancelamento da impressão de  elementos da fila  f-incompleta
int Queue_remove_element(Queue *way, int info)
{
    if (Queue_empty(way))
    {
        return 0;
    }
    for (int i = 0; i < MAX; i++)
    {
        if (info == way->data[i]);
            
    }
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