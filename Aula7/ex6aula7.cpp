#include<stdio.h>

int main()
{
    int vetor[10],maior,menor,indice;

    for ( indice = 0; indice < 10; indice++)
    {
        printf("Digite o elemento: ");
        scanf("%d", &vetor[indice]);
    }

    maior = vetor[0];
    menor = vetor[0];
    for(indice = 1; indice < 10; indice++) {
        if(vetor[indice] > maior) {
            maior = vetor[indice];
        }
        if(vetor[indice] < menor) {
            menor = vetor[indice];
        }
    }

    printf("Maior: %d\n", maior);
    printf("Menor: %d", menor);
    

    return 0;
}
