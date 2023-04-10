#include<stdio.h>
#include<stdlib.h>

/*Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor a ser pago por aquele lanche. 
Considere que a cada execução somente será calculado um item
100- Cachorro quente - 10,10
101-Bauru simples- 8,30
102-Bauru com ovo- 8,50
103-Hamburguer-12,50
104-Cheeseburguer- 13,25*/

int main()
{
    int opcao;
    int quantidade;
    float valor;

    printf("100-Cachrro quente\n");
    printf("101-Bauru simples\n");
    printf("102-Bauru com ovo\n");
    printf("103-Hamburguer\n");
    printf("104-Cheeseburguer\n");
    printf("Escolha uma opcao: \n");
    scanf("%d", &opcao);

printf("Digite a quantidade: ");
scanf("%d", &quantidade);

    switch (opcao)
    {
    case 100:
        valor=quantidade*10.10;
        printf("O valor a ser pago e %.2f", valor);
        break;
    case 101:
        valor=quantidade*8.30;
        printf("O valor a ser pago e %.2f", valor);
        break;
    case 102:
        valor=quantidade*8.50;
        printf("O valor a ser pago e %.2f", valor);
        break;
    case 103:
        valor=quantidade*12.50;
        printf("O valor a ser pago e %.2f", valor);
        break;
    case 104:
        valor=quantidade*13.25;
        printf("O valor a ser pago e %.2f", valor);
        break;
    default:
        break;
    }
        return 0;
}

