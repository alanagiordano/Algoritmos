#include<stdio.h>

/*Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do 
produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D). 
Apresente o resultado da seguinte forma: 
DIFERENCA = (“valor de A” * “valor de B” - ““valor de C” * ““valor de D”) 
DIFERENCA = (“valor de DIFERENCA”)*/

int main()
{
    int valorA, valorB, valorC, valorD, diferenca;

    printf("Digite o valor de A: ");
    scanf("%d", &valorA);
    printf("Digite o valor de B: ");
    scanf("%d", &valorB);
    printf("Digite o valor de C: ");
    scanf("%d", &valorC);
    printf("Digite o valor de D: ");
    scanf("%d", &valorD);

    diferenca = (valorA*valorB - valorC*valorD);

    printf("DIFERENCA = (%d * %d - %d * %d)\n", valorA,valorB,valorC,valorD);
    printf("DIFERENCA = %d", diferenca);
    return 0;
}
