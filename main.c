#include <stdio.h>
#include "queue.h"

typedef struct no
{
    int id, num_copias, origem;
    char nome[20];
} No;
No arquivo;

void pedido_impressao(Queue *way,  No *arquivo)
{
    char op[10], sim;
    arquivo->origem = 0;
    // Pedido de impressão
    printf("Digite o nome documento que deseja imprimir e o numero de copias:\t");
    scanf("%s, %d", &arquivo->nome[20], &arquivo->num_copias);
    printf("\nA origem do arquivo é 'chefia'?\t");
    scanf("%s", &op);
    if (op == sim)
    {
        arquivo->origem = 1;
    }
    srand(time(NULL));
    arquivo->id = rand() % 100;//id deve ser gerado automaticamente
    printf("\nId = [%d]\n", arquivo->id);
    for (int i = 0; i < arquivo->num_copias; i++) // chama a enqueue o mesmo número de vezes que o número de cópias pedidas.
    {
        Queue_enqueue(way, arquivo);
    }
}
void impressora_pronta(way, arquivo)
{
    No *arquivo;
    // busca o próximo documento a ser impresso:
    Queue_head(way, &arquivo);
    printf("\nProximo documento a ser imprsesso:\t%s", *arquivo->nome);
    Queue_dequeue(way, &arquivo->id);
}
void cancelar_impressão(arquivo)
{
    printf("\ndigite o id do arquivo que deseja cancelar:\t");
    scanf("%d", &arquivo->id);
}
int busca(No arquivo);
void mostra_fila();

int main()
{
    int i = 0, temp = 0, option;
    Queue *way = Queue_create();
    char prints[10];
    do
    {
        printf("\nSelecione a operacao que deseja:\n pedido de impressao (1)\nimpressora pronta(2)\ncancelar impressao(3)\nbusca (4)\nmostrar a fila (5)\nencerrar programa (-1)");
        scanf("%d", &option);
        if (option == 1)
        {
            pedido_impressao();
        }
        if (option == 2)
        {
            impressora_pronta(way, prints[10])
        }
        if (option == 3)
        {
            cancelar_impressao();
        }
        if (option == 4)
        {
            busca(No arquivo);
        }
        else if (option == 5)
        {
            mostra_fila();
        }
    } while (option != -1);

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