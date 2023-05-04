#include<stdio.h>

int main()
{
    int vetor[8],x,y,soma=0,indice;

    for ( indice = 0; indice < 8; indice++)
    {
        printf("Digite o elemento: ");
        scanf("%d", &vetor[indice]);
    }

    printf("Digite as posicoes que deseja: ");
    scanf("%d %d",&x, &y);

    if (x>=0 && x<8)
    {
        printf("posicao valida\n");
    }
    if (y>=0 && y<8)
    {
        printf("posicao valida\n");
    }

    soma=vetor[x]+vetor[y];

    printf("A soma e igual a %d", soma);
    
    
    return 0;
}
