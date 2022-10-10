#ifndef QUEUE_H
#define QUEUE_H

typedef struct queue Queue;
typedef struct no No;

Queue* Queue_create();
void Queue_destroy(Queue*);
int Queue_enqueue(Queue*, No);
int Queue_dequeue(Queue*, No*);
int Queue_head(Queue*, No*);

int Queue_full(Queue*);
int Queue_empty(Queue*);
int Queue_qty(Queue*);



#endif