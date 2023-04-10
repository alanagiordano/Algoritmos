#include<stdio.h>
#include<windows.h>

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
