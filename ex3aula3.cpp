#include<stdio.h>

/*Usando o comando switch, faça um algoritmo que leia o número de DDD e informe a qual cidade pertence,
considerando só os seguintes valores: 

61 - Brasília 
71 - Salvador 
11 - São Paulo 
21 - Rio de Janeiro 
32 - Juiz de Fora 
19 - Campinas 
27 - Vitória 
31 - Belo Horizonte 
Qualquer outro - uma cidade no Brasil sem identificação */

int main()
{
    char x;
    printf("Considere essas opcoes para o ddd: \n");
    printf("a-61\n");
    printf("b-71\n");
    printf("c-11\n");
    printf("d-21\n");
    printf("e-32\n");
    printf("f-19\n");
    printf("g-27\n");
    printf("h-31\n");
    printf("Escolha a opcao de acordo com o ddd: ");
    scanf("%s", &x);

    switch (x)
    {
    case 'a':
        printf("BRASILIA\n");
        break;
    case 'b':
        printf("SALVADOR\n");
        break;
    case 'c':
        printf("SAO PAULO\n");
        break;
    case 'd':
        printf("RIO DE JANEIRO\n");
        break;
    case 'e':
        printf("JUIZ DE FORA\n");
        break;
    case 'f': 
        printf("CAMPINAS\n");
        break;
    case 'g':
        printf("VITORIA\n");
        break;
    case 'h':
        printf("BELO HORIZONTE\n");
        break;
    default:
        printf("UMA CIDADE NO BRASIL SEM IDENTIFICACAO");

    }
    return 0;
}
