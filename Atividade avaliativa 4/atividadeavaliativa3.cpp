#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char proprietario[100];
    char combustivel[10];
    char modelo[100];
    char cor[100];
    char numChassi[100];
    int ano;
    char placa[8];
} Veiculo;

typedef struct node {
    Veiculo veiculo;
    struct node* next;
} Node;

Node* criarNo(Veiculo veiculo) {
    Node* novoNo = (Node*)malloc(sizeof(Node));
    novoNo->veiculo = veiculo;
    novoNo->next = NULL;
    return novoNo;
}

void inserirVeiculo(Node** lista, Veiculo veiculo) {
    Node* novoNo = criarNo(veiculo);
    
    if (*lista == NULL) {
        *lista = novoNo;
    } else {
        Node* current = *lista;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = novoNo;
    }
}

void listarProprietariosDiesel(Node* lista) {
    printf("proprietarios de veiculos a diesel do ano de 2010 ou posterior:\n");
    Node* current = lista;
    int encontrado = 0;
    while (current != NULL) {
        if (strcmp(current->veiculo.combustivel, "diesel") == 0 && current->veiculo.ano >= 2010) {
            printf("- %s\n", current->veiculo.proprietario);
            encontrado = 1;
        }
        current = current->next;
    }
    if (!encontrado) {
        printf("nenhum veiculo a diesel do ano de 2010 ou posterior encontrado.\n");
    }
}

void listarPlacasProprietarios(Node* lista) {
    printf("placas que começam com a letra J e terminam com 0, 2, 4 ou 7:\n");
    Node* current = lista;
    int encontrado = 0;
    while (current != NULL) {
        char primeiraLetra = current->veiculo.placa[0];
        int ultimoDigito = current->veiculo.placa[6] - '0';
        if (primeiraLetra == 'J' && (ultimoDigito == 0 || ultimoDigito == 2 || ultimoDigito == 4 || ultimoDigito == 7)) {
            printf("- placa: %s | proprietario: %s\n", current->veiculo.placa, current->veiculo.proprietario);
            encontrado = 1;
        }
        current = current->next;
    }
    if (!encontrado) {
        printf("nenhuma placa que atenda aos criterios encontrada.\n");
    }
}

void listarModeloCorPlacasVogais(Node* lista) {
    printf("modelo e cor de veiculos cujas placas possuem como segunda letra uma vogal e cuja soma dos valores numéricos e um numero par:\n");
    Node* current = lista;
    int encontrado = 0;
    while (current != NULL) {
        char segundaLetra = current->veiculo.placa[1];
        int somaNumeros = (current->veiculo.placa[3] - '0') + (current->veiculo.placa[4] - '0') + (current->veiculo.placa[5] - '0');
        if (strchr("AEIOUaeiou", segundaLetra) != NULL && somaNumeros % 2 == 0) {
            printf("- modelo: %s | cor: %s\n", current->veiculo.modelo, current->veiculo.cor);
            encontrado = 1;
        }
        current = current->next;
    }
    if (!encontrado) {
        printf("nenhum veiculo que atenda aos criterios encontrado.\n");
    }
}

void trocarProprietario(Node* lista, char* numChassi, char* novoProprietario) {
    Node* current = lista;
    int encontrado = 0;
    while (current != NULL) {
        if (strcmp(current->veiculo.numChassi, numChassi) == 0) {
            int temZero = 0;
            for (int i = 0; i < strlen(current->veiculo.placa); i++) {
                if (current->veiculo.placa[i] == '0') {
                    temZero = 1;
                    break;
                }
            }
            if (!temZero) {
                strcpy(current->veiculo.proprietario, novoProprietario);
                printf("o proprietario do veiculo com chassi %s foi alterado para %s.\n", numChassi, novoProprietario);
                encontrado = 1;
            } else {
                printf("o veiculo com chassi %s possui um digito igual a zero na placa. troca de proprietario não permitida.\n", numChassi);
                encontrado = 1;
            }
        }
        current = current->next;
    }
    if (!encontrado) {
        printf("veculo com chassi %s nao encontrado.\n", numChassi);
    }
}

void limparLista(Node** lista) {
    Node* current = *lista;
    while (current != NULL) {
        Node* next = current->next;
        free(current);
        current = next;
    }
    *lista = NULL;
}

int main() {
    Node* lista = NULL;
    int opcao;

    while (1) {
        printf("\n----- MENU -----\n");
        printf("1. inserir veiculo\n");
        printf("2. listar proprietarios de veiculos a diesel do ano de 2010 ou posterior\n");
        printf("3. listar placas que começam com a letra J e terminam com 0, 2, 4 ou 7\n");
        printf("4. listar modelo e cor de veiculos cujas placas possuem como segunda letra uma vogal e cuja soma dos valores numericos é um numero par\n");
        printf("5. trocar proprietario de um veiculo\n");
        printf("6. sair\n");
        printf("escolha uma opção: ");
        scanf("%d", &opcao);
        printf("----------------\n");

        if (opcao == 1) {
            Veiculo veiculo;
            printf("proprietário: ");
            scanf("%s", veiculo.proprietario);
            printf("combustível (alcool, diesel ou gasolina): ");
            scanf("%s", veiculo.combustivel);
            printf("modelo: ");
            scanf("%s", veiculo.modelo);
            printf("cor: ");
            scanf("%s", veiculo.cor);
            printf("numero do chassi: ");
            scanf("%s", veiculo.numChassi);
            printf("ano: ");
            scanf("%d", &veiculo.ano);
            printf("placa: ");
            scanf("%s", veiculo.placa);

            inserirVeiculo(&lista, veiculo);

            printf("veiculo inserido com sucesso!\n");
        } else if (opcao == 2) {
            listarProprietariosDiesel(lista);
        } else if (opcao == 3) {
            listarPlacasProprietarios(lista);
        } else if (opcao == 4) {
            listarModeloCorPlacasVogais(lista);
        } else if (opcao == 5) {
            char numChassi[100];
            char novoProprietario[100];
            printf("numero do chassi do veiculo: ");
            scanf("%s", numChassi);
            printf("novo proprietario: ");
            scanf("%s", novoProprietario);
            trocarProprietario(lista, numChassi, novoProprietario);
        } else if (opcao == 6) {
            break;
        } else {
            printf("opção invalida. Por favor, escolha uma opção valida.\n");
        }
    }

    limparLista(&lista);

    return 0;
}
