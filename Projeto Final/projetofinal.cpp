#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUTOS 100

typedef struct
{
    char codigo[10],descricao[100];
    int quantidade;
    float valor;
} Produto;

typedef struct lista {
    Produto estoque;
    struct lista *prox;
} Lista;

// inicializa a lista
Lista *inicializa(void) { return NULL; }

void addProduto(Produto estoque[], int *num_produtos){
    Produto novoProduto;
    printf("Codigo: ");
    scanf("%s", novoProduto.codigo);
    printf("Descricao: ");
    scanf("%s", novoProduto.descricao);
    printf("Quantidade: ");
    scanf("%d", &novoProduto.quantidade);
    printf("Valor: ");
    scanf("%f", &novoProduto.valor);

    estoque[*num_produtos] = novoProduto;
    (*num_produtos)++;

    printf("Produto adicionado\n");
}

void imprimir(Produto estoque[], int num_produtos){
    printf("Relatorio: \n");
    for (int i = 0; i < num_produtos; i++)
    {
        printf("Codigo: %s\n", estoque[i].codigo);
        printf("Descricao: %s\n", estoque[i].descricao);
        printf("Quantidade: %d\n", estoque[i].quantidade);
        printf("Valor: %.2f\n", estoque[i].valor);
    }  
}

void pesquisar(Produto estoque[], int num_produtos){
    char codigo[10];
    printf("Digite o codigo: ");
    scanf("%s", codigo);

    for (int i = 0; i < num_produtos; i++) {
        if (strcmp(estoque[i].codigo, codigo) == 0) {
            printf("Produto encontrado:\n");
            printf("Código: %s\n", estoque[i].codigo);
            printf("Descrição: %s\n", estoque[i].descricao);
            printf("Quantidade: %d\n", estoque[i].quantidade);
            printf("Valor: %.2f\n", estoque[i].valor);
            return;
        }
    }
}

void remover(Produto estoque[], int *num_produtos){
    char codigo[10];
    printf("Digite o codigo para remover: ");
    scanf("%s", codigo);

    for (int i = 0; i < *num_produtos; i++) {
        if (strcmp(estoque[i].codigo, codigo) == 0) {
            for (int j = i; j < (*num_produtos - 1); j++) {
                estoque[j] = estoque[j + 1];
            }

            (*num_produtos)--;
            printf("removido\n");
            return;
        }
    }

    printf("nao cadastrado\n");
}

int main()
{
    Produto estoque[MAX_PRODUTOS];
    int num_produtos = 0, opcao;

    do
    {
        printf("1- Adicionar produto\n");
        printf("2- Imprimir relatorio\n");
        printf("3- Pesquisar produto\n");
        printf("4- Remover produto\n");
        printf("5- Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            addProduto(estoque, &num_produtos);
            break;
        case 2:
            imprimir(estoque, num_produtos);
            break;
        case 3: 
            pesquisar(estoque, num_produtos);
            break;
        case 4:
            remover(estoque, &num_produtos);
            break;
        case 5:
            printf("sair\n");
            return 0;
            break;
        default:
            printf("invalido\n");
            break;
        }

    } while (opcao != 0);
    


    return 0;
}



