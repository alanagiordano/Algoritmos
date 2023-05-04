#include<stdio.h>

int main()
{
    int vetor[10],soma=0;

    printf("Digite o valor do vetor posicao 0: ");
    scanf("%d", &vetor[0]);
    printf("Digite o valor do vetor posicao 1: ");
    scanf("%d", &vetor[1]);
    printf("Digite o valor do vetor posicao 2: ");
    scanf("%d", &vetor[2]);
    printf("Digite o valor do vetor posicao 3: ");
    scanf("%d", &vetor[3]);
    printf("Digite o valor do vetor posicao 4: ");
    scanf("%d", &vetor[4]);
    printf("Digite o valor do vetor posicao 5: ");
    scanf("%d", &vetor[5]);
    printf("Digite o valor do vetor posicao 6: ");
    scanf("%d", &vetor[6]);
    printf("Digite o valor do vetor posicao 7: ");
    scanf("%d", &vetor[7]);
    printf("Digite o valor do vetor posicao 8: ");
    scanf("%d", &vetor[8]);
    printf("Digite o valor do vetor posicao 9: ");
    scanf("%d", &vetor[9]);

    for (int indice = 0; indice < 10; indice++)
    {
        if (vetor[indice] % 2 == 0)
        {
           printf("%d\n", vetor[indice]);
           soma=soma+vetor[indice]; 
        }      
    }

    printf("A soma de pares e igual a %d", soma);
    
    return 0;
}
