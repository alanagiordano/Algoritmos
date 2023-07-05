#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct 
{
    char nome[50],endereco[100],tipo[50];
    float preco;
} Restaurante;

typedef struct node
{
    Restaurante restaurante;
    struct node* next;
} Node;

Node* criarNo(Restaurante restaurante) {
    Node* novoNo = (Node*)malloc(sizeof(Node));
    novoNo->restaurante = restaurante;
    novoNo->next = NULL;
    return novoNo;
}

void solicitarDados(Node** lista, Restaurante restaurante){
    Node* novoNo = criarNo(restaurante);

    printf("Nome: ");
    scanf("%s", restaurante.nome);
    printf("Endereco: ");
    scanf("%s", restaurante.endereco);
    printf("Tipo: ");
    scanf("%s", restaurante.tipo);
    printf("Preco medio: ");
    scanf("%f", &restaurante.preco);

    novoNo-> next = *lista;
    *lista = novoNo;
}


void imprimirDados(Node* lista){
    Node* current = lista;

    if (current == NULL)
    {
        printf("vazia");
    }
    else
    {
        printf("Lista de restaurante: \n");
        while (current != NULL)
    {
        printf("Nome: %s\n", current->restaurante.nome);
        printf("Endereco: %s\n", current->restaurante.endereco);
        printf("Tipo: %s\n", current->restaurante.tipo);
        printf("Preco: %.2f\n", current->restaurante.preco);

        current = current->next;
    }
    }
}

int main()
{
    Node* lista = NULL;
    int opcao;

    do
    {
        printf("1-Inserir restaurante\n");
        printf("2-Listar restaurantes\n");
        printf("0-Sair\n");
        printf("Escolha a opcao: ");
        scanf("%d", &opcao);

        Restaurante restaurante;

        switch (opcao)
        {
        case 1:
            solicitarDados(&lista, restaurante);
            break;
        case 2: 
            imprimirDados(lista);
            break;
        case 0: 
            return 0;
            break;
        default:
            break;
        }
    } while (opcao != 0);
    return 0;
}




 