#include<stdio.h>

int main()
{
    int vetor[10],maior,menor,indice,indiceMaior;

    for ( indice = 0; indice < 10; indice++)
    {
        printf("Digite o elemento: ");
        scanf("%d", &vetor[indice]);
    }

    maior = vetor[0];
    for(indice = 1; indice < 10; indice++) {
        if(vetor[indice] > maior) {
            maior = vetor[indice];
            indiceMaior=indice;
        }
    }

    printf("Maior: %d\n", maior);
    printf("Posicao: %d", indiceMaior);

return 0;
}
    

    