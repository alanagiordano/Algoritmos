#include<stdio.h>

int main()
{

    float notas[15], media, soma = 0.0;

    for (int i = 1; i <= 15; i++)
    {
        printf("Digite a nota do aluno: ");
        scanf("%f", &notas[i]);
        soma = soma + notas[i];
    }

    media=soma/15;
    printf("Media: %.2f", media);
    

    
    return 0;
}
