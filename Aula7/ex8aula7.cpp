#include<stdio.h>

int main()
{
    int vetor[6], indice;

    
    for ( indice = 0; indice < 6; indice++)
    {
       printf("Digite os elementos: ");
       scanf("%d", &vetor[indice]);
    }

    printf("INVERSO: \n");
    for ( indice = 5; indice>=0 ; indice--)
    {
        printf("%d\n", vetor[indice]);
    }
    
    
    return 0;
}
