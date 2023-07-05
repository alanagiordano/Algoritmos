#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct 
{
    char nome[50];
    double peso, calorias;
} Dieta;

typedef struct node
{
    Dieta dieta;
    struct node* next;
} Node;

Node* criarNo(Dieta dieta) {
    Node* novoNo = (Node*)malloc(sizeof(Node));
    novoNo->dieta = dieta;
    novoNo->next = NULL;
    return novoNo;
}

void solicitarDados(Node** lista, Dieta dieta){
    Node* novoNo = criarNo(dieta);

    printf("Nome da comida: ");
    scanf("%s", dieta.nome);
    printf("Peso de uma porcao: ");
    scanf("%f", dieta.peso);
    printf("Numero de calorias: ");
    scanf("%f", dieta.calorias);

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
        printf("Dietas: \n");
        while (current != NULL)
    {
        printf("Nome da comida: %s\n", current->dieta.nome);
        printf("Peso de uma porcao: %.2f", current->dieta.peso);
        printf("Numero de calorias: %.2f", current->dieta.calorias);

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
        printf("1-Inserir dieta\n");
        printf("2-Listar dietas\n");
        printf("0-Sair\n");
        printf("Escolha a opcao: ");
        scanf("%d", &opcao);

        Dieta dieta;

        switch (opcao)
        {
        case 1:
            solicitarDados(&lista, dieta);
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