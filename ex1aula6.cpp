#include <stdio.h>

/* Fazer um programa em "C" que solicita o total gasto pelo cliente de uma loja, imprime as opções de pagamento,
 solicita a opção desejada e imprime o valor total das prestações (se houverem). 

1) Opção: a vista com 10% de desconto

2) Opção: em duas vezes (preço da etiqueta)

3) Opção: de 3 até 10 vezes com 3% de juros ao mês (somente para compras acima de R$ 100,00).

OBS: fazer uma função que imprime as opções solicita a opção desejada e retorna a opção escolhida.
No programa principal, testar a opção escolhida e ativar a função correspondente (uma função para cada opção) */

int imprimir_opcoes_pagamento() {
    int opcao_pagamento;
    
    printf("Opcoes de pagamento:\n");
    printf("1 - A vista com 10%% de desconto\n");
    printf("2 - Em duas vezes (preco da etiqueta)\n");
    printf("3 - De 3 ate 10 vezes com 3%% de juros ao mes (somente para compras ate R$ 100)\n");
    
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao_pagamento);
    
    return opcao_pagamento;
}

void opcao_pagamento_a_vista(float total_gasto) {
    float valor_prestacao = total_gasto * 0.9;
    printf("O valor total a ser pago a vista com 10%% de desconto e: R$ %.2f\n", valor_prestacao);
}

void opcao_pagamento_em_duas_vezes(float total_gasto) {
    float valor_prestacao = total_gasto / 2;
    printf("O valor total a ser pago em duas vezes e: 2x de R$ %.2f\n", valor_prestacao);
}

void opcao_pagamento_de_3_a_10_vezes(float total_gasto) {
    int num_prestacoes;
    float valor_prestacao;
    
    printf("Digite o numero de prestacoes (entre 3 e 10): ");
    scanf("%d", &num_prestacoes);
    
    if (num_prestacoes >= 3 && num_prestacoes <= 10) {
        valor_prestacao = total_gasto * 1.03 / num_prestacoes;
        printf("O valor total a ser pago em %d vezes com 3%% de juros ao mes e: %d x de R$ %.2f\n", num_prestacoes, num_prestacoes, valor_prestacao);
    } else {
        printf("Numero de prestacoes invalido.\n");
    }
}

int main() {
    float total_gasto;
    int opcao_pagamento;
    
    printf("Digite o total gasto pelo cliente: R$ ");
    scanf("%f", &total_gasto);
    
    opcao_pagamento = imprimir_opcoes_pagamento();
    
    switch (opcao_pagamento) {
        case 1:
            opcao_pagamento_a_vista(total_gasto);
            break;
        case 2:
            opcao_pagamento_em_duas_vezes(total_gasto);
            break;
        case 3:
            if (total_gasto >= 100) {
                opcao_pagamento_de_3_a_10_vezes(total_gasto);
            } else {
                printf("Esta opcao de pagamento so e valida para compras acima R$ 100.\n");
            }
            break;
        default:
            printf("Opcao invalida.\n");
            break;
    }
    
    return 0;
}
