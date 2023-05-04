#include<stdio.h>

int main()
{
    int vetorA[6];
    int i,soma;

    vetorA[0] = 1;
    vetorA[1] = 0;
    vetorA[2] = 5;
    vetorA[3] = -2;
    vetorA[4] = -5;
    vetorA[5] = 7;

    printf("Digite o valor da variavel soma: ");
    scanf("%d", &i);

    soma= vetorA[0]+vetorA[1]+vetorA[5]+i;

    printf("A soma dos vetores 0,1 e 5, mais a variavel soma e igual a %d\n", soma);

    vetorA[4] = 100;

    printf("VetorA posicao 0: %d\n", vetorA[0]);
    printf("VetorA posicao 1: %d\n", vetorA[1]);
    printf("VetorA posicao 2: %d\n", vetorA[2]);
    printf("VetorA posicao 3: %d\n", vetorA[3]);
    printf("VetorA posicao 4: %d\n", vetorA[4]);
    printf("VetorA posicao 5: %d\n", vetorA[5]);

    return 0;
}