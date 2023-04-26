#include<stdio.h>
#include<windows.h>

/*Elabore um algoritmo que permita ao usuário realizar a compra de frutas. Assim, 
apresente a lista de frutas disponíveis, abaixo, com seus respectivos valores. O algoritmo 
deve permitir ao usuário retomar o menu frutas quantas vezes quiser, e solicitar a quantidade 
de frutas. Ao final, apresente o valor total da compra. 
1 => ABACAXI – 5,00 a unidade 
2 => MAÇA – 1,00 a unidade 
3 => PERA – 4,00 a unidade*/

int main()
{
    int x,quantidadeAbacaxi=0,quantidadeMaca=0,quantidadePera=0,soma=0;
    inicio:
    printf("Observe o cardapio:\n ");
    printf("1)abacaxi\n");
    printf("2)maca\n");
    printf("3)pera\n");
    printf("4)finalizar programa\n");
    printf("Selecione a opcao: \n");
    scanf("%d", &x);
    
    switch (x)
    {
    case 1:
        printf("digite a quantidade: ");
        scanf("%d", &quantidadeAbacaxi);
        break;
    case 2: 
        printf("digite a quantidade: ");
        scanf("%d", &quantidadeMaca);
        break;
    case 3:
        printf("digite a quantidade: ");
        scanf("%d", &quantidadePera);
        break;
    case 4:
        printf("finalizado");
        return 0;
    default:
        break;
    }
    soma=(quantidadeAbacaxi*5)+(quantidadeMaca*1)+(quantidadePera*4);
    printf("O total e igual a %d\n", soma);
    goto inicio;
    return 0;
}
