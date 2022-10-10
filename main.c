#include <stdio.h>
#include "queue.h"

typedef struct no
{
    int id, num_copias, origem;
    char nome_arquivo[20];
} No;

void pedido_impressao(Queue *way)
{
    No *arquivo;
    char op[10], sim;
    // Pedido de impressão
    printf("Digite o nome documento que deseja imprimir e o numero de copias:\t");
    scanf("%s, %d", &arquivo->nome_arquivo[20], &arquivo->num_copias);
    printf("\nA origem do arquivo é 'chefia'?\t");
    scanf("%s", &op);
    if (op == sim)
    {
        arquivo->origem = 1;
    }
    srand(time(NULL));
    arquivo->id = rand() % 100;
    for (int i = 0; i < arquivo->num_copias; i++)//chama a enqueue o mesmo número de vezes que o número de cópias pedidas.
    {
        Queue_enqueue(way, arquivo);
    }
}
void impressora_pronta(){
    //busca o próximo documento a ser impresso:
}
void cancelar_impressão();
int busca();
void mostra_fila();

int main()
{
    int i = 0, temp = 0;
    Queue *way = Queue_create();
    char prints[10];

    pedido_impressao();

    for (i; i <= 10; i++)
    {
        if (Queue_enqueue(way, prints[i]) == 0)
        {
            printf(" ERRO - Limite de arquivos para impressao atingido.");
        }

        while (Queue_dequeue(way, &temp))
        {
            printf("%d", temp);
        }
        return 0;
    }
}