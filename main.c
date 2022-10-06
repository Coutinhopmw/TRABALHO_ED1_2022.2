#include<stdio.h>
#include"queue.h"

int main(){
    int i=0, temp=0;
    Queue* way = Queue_create();
    char prints[10];
    for(i; i <= 10; i++){
        if(Queue_enqueue(way, prints[i] )){
            printf(" ERRO - Limite de arquivos para impressao atingido.");
        }

        while (Queue_dequeue(way,&temp))
        {
            printf("%d", temp);
        }
        return 0;
    }
}